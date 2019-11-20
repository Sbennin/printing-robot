#include "PC_FileIO.c"
#include "letters.c"

const string fileName = "test.txt";
const float PAGE_WIDTH = 10; //cm
const float SCALE = 0.15; //10 units of points are equal to 1.5 cm
const int SMALL = 1; //small space between letters
const int LARGE = 5; //large space between words
const int NEW = 5; //space between lines
const int TOL = 5; //robot can be up to 5deg skew
const int WRITE_POWER = 5; //writing speed
const float BIG_RADIUS = 2.75;
const float SMALL_RADIUS = 1;
const tMotor Y_LEFT = motorD;
const tMotor Y_RIGHT = motorB;
const tMotor X_MOTOR = motorA;
const tMotor Z_MOTOR = motorC;
const tSensors COLOR = S1;
const tSensors GYRO = S4;
const tSensors TOUCH = S2;

int totalChar;
int totalTime;
char toWrite[20];

int GetIndex(char letter) //returns index of letter in the array
{
		if (letter == '.')
			return 26;
		else if (letter == '-')
			return 27;
		else if ((int)letter > 96 && (int)letter < 123) //lowercase
			return (int)letter - 96;
		else if ((int)letter > 65 && (int)letter < 90)
			return (int)letter - 65;
		else
			return -1;
}

bool OnPaper() //checks to make sure the robot is on paper
{
	return SensorValue(COLOR) == (int)colorWhite;
}

float SpaceLeft() //returns the space left in a line in cm
{
	float moved = nMotorEncoder[X_MOTOR]*180*PI*SMALL_RADIUS;
	return abs(PAGE_WIDTH - moved);
}

float GetWidth() // gets the width of a word in cm
{
	float width = 0;

	for (int curChar = 0; curChar < 20; curChar++)
	{
		int charIndex = GetIndex(toWrite[curChar]);

		if (charIndex != -1)
		{
			width += letters[charIndex].width;
			if (curChar != 20 -1)
				width += SMALL;
		}
	}

	return width*SCALE;
}

void MovePen(Point loc)//moves pen to a relative point
{
	int direction = 0;
	if (loc.x != 0)
	{
		int curEnc = nMotorEncoder[X_MOTOR];
		if (loc.x < 0)
			direction = -1;
		else
			direction = 1;

		float EncLimit = abs(loc.x*PI*SMALL_RADIUS/180);

		motor[X_MOTOR] = direction*WRITE_POWER;
		while(abs(curEnc - nMotorEncoder[X_MOTOR]) < EncLimit)
		{}
		motor[X_MOTOR] = 0;
	}
	if (loc.y != 0)
	{
		int curEnc = nMotorEncoder[Y_LEFT];
		if (loc.y < 0)
			direction = -1;
		else
			direction = 1;

		float EncLimit = fabs(loc.y*PI*BIG_RADIUS/180);

		motor[Y_LEFT] = motor[Y_RIGHT] = direction*WRITE_POWER;
		while(abs(curEnc - nMotorEncoder[Y_LEFT]) < EncLimit)
		{}
		motor[Y_LEFT] = motor[Y_RIGHT] = 0;
	}
}

void AddSmall() //adds a small space between letters
{
	Point small;
	small.x = SMALL;
	small.y = 0;
	MovePen(small);
}

void AddLarge() //adds a large space between words
{
	Point large;
	large.x = LARGE;
	large.y = 0;
	MovePen(large);
}

bool NotSkew() //checks to make sure the robot is aligned
{
	return abs(getGyroDegrees(GYRO)) < TOL;
}

void PauseTimer(int current) //adds the current time to the total
{
	totalTime += current;
}

void PenUp() //lifts pen off the page
{
	nMotorEncoder[Z_MOTOR] = 0;
	motor[Z_MOTOR] = -5;

	while (abs(nMotorEncoder[Z_MOTOR]) < 10)
	{}

	motor[Z_MOTOR] = 0;
}

void PenDown() //puts the pen on the page
{
	nMotorEncoder[Z_MOTOR] = 0;
	motor[Z_MOTOR] = 5;

	while (abs(nMotorEncoder[Z_MOTOR]) < 10)
	{}

	motor[Z_MOTOR] = 0;
}

void PressEnter() //waits for the user to press and release the enter button
{
	while(!getButtonPress(buttonEnter))
	{}
	while(getButtonPress(buttonEnter))
	{}
}

void ResetArm() //moves the arm all the way to the left
{
	motor[X_MOTOR] = -10;
	while (abs(nMotorEncoder[X_MOTOR]) > 0)
	{}

	motor[X_MOTOR] = 0;
}

void NewLine() //resets the arm and moves down a line
{
	ResetArm();
	Point new;
	new.x = NEW;
	new.y = 0;
	MovePen(new);
}

void RefillPaper() //handles event when the robot reaches the end of the page
{
	PauseTimer(time1[T1]);
	do
	{
		displayString(1, "Place on a new piece of paper and press enter");
		PressEnter();
	} while(!OnPaper());

	ResetArm();
	time1[T1] = 0;
}

void WriteLetter(char letter) //follows the path for a letter
{
	int charIndex = GetIndex(letter);

	if (charIndex != -1)
	{
		MovePen(letters[charIndex].points[0]);
		PenDown();

		for (int curPoint = 1; curPoint < letters[charIndex].arrLength-1; curPoint++)
		{
			MovePen(letters[charIndex].points[curPoint]);
		}

		PenUp();
		MovePen(letters[charIndex].points[letters[charIndex].arrLength-1]);
	}
}

bool TooLong() //checks to see if the word needs to be split
{
	return GetWidth() > PAGE_WIDTH;
}

int WriteLongWord() //adds hyphens where needed while writing a word
{
	int length = 0;
	for (int curChar = 0; curChar < 20; curChar++)
	{
		int charIndex = GetIndex(toWrite[curChar]);
		float width = (SMALL + letters[charIndex].width + letters[27].width)*SCALE;

		if (SpaceLeft() < width && curChar != 19)
		{
			WriteLetter('-');
			if (!OnPaper())
				RefillPaper();
			else
				NewLine();
			WriteLetter(toWrite[curChar]);
			AddSmall();
			length += 2;
		}
		else
		{
			WriteLetter(toWrite[curChar]);
			if (curChar != 19)
				AddSmall();
			length++;
		}
	}

	return length;
}

int WriteWord() //writes a word
{
	int length = 0;
	for (int curChar = 0; curChar < 20; curChar++)
	{
		WriteLetter(toWrite[curChar]);
		if (curChar != 19)
			AddSmall();
		length++;
	}
	AddLarge();

	return length;
}

void getToWrite(string strWord)
{
	int length = strlen(strWord);

	for (int i = 0; i < length; i++)
	{
		string copy = strWord;
		stringDelete(strWord, i, 1);
		toWrite[i] = copy;
	}
}

task main()
{
		TFileHandle fin;
		bool fileOkay = openReadPC(fin, fileName);

		if (fileOkay)
		{
		SensorType[TOUCH] = sensorEV3_Touch;
		SensorType[GYRO] = sensorEV3_Gyro;
		SensorType[COLOR] = sensorEV3_Color;
		wait1Msec(50);
		SensorMode[GYRO] = modeEV3Gyro_RateAndAngle;
		SensorMode[COLOR] = modeEV3Color_Color;
		wait1Msec(50);

		do
		{
			displayString(1, "Place on a piece of paper and press enter");
			PressEnter();
		} while(!OnPaper());

		ResetArm();
		nMotorEncoder[Y_LEFT] = 0;
		nMotorEncoder[X_MOTOR] = 0;
		resetGyro(GYRO);
		totalTime = 0;
		totalChar = 0;
		getArr();
		time1[T1] = 0;

		string strWord = "";
		while (readTextPC(fin, strWord))
		{
			getToWrite();
			if (!NotSkew())
			{
				do
				{
					displayString(1, "Align robot on paper and press enter");
					PressEnter();
				} while (!OnPaper());
				resetGyro(GYRO);
			}

			float width = GetWidth();
			if (width > SpaceLeft() && !TooLong()) //not enough space left on the current line
			{
				if (!OnPaper())
					RefillPaper();
				else
					NewLine();
			}

			if (TooLong())
				totalChar += WriteLongWord();
			else
				totalChar += WriteWord();
		}

			PauseTimer(time1[T1]);
			ResetArm();

			displayString(1, "Printing complete");
			displayString(2, "Total time: %f", totalTime/1000.0);
			displayString(3, "Total number of characters: %d", totalChar);

			closeFilePC(fin);

		}
		else
		{
			displayString(1, "Problem opening file. Press enter to end program");
		}
		PressEnter();
}
