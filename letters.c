struct Point
{
	int x;
	int y;
};

struct Letter
{
		char letter;
		int width;
		int arrLength;
		Point points[13]; 
		//each point is a command given to the move pen function. Each point is relative to the last one.
};

Letter letters[28];

void getArr()
{
letters[0].letter = 'A';
letters[0].width = 6;
letters[0].arrLength = 8;
letters[0].points[0].x = 0;
letters[0].points[0].y = 0;
letters[0].points[1].x = 0;
letters[0].points[1].y = 10;
letters[0].points[2].x = 6;
letters[0].points[2].y = 0;
letters[0].points[3].x = 0;
letters[0].points[3].y = -5;
letters[0].points[4].x = -6;
letters[0].points[4].y = 0;
letters[0].points[5].x = 6;
letters[0].points[5].y = 0;
letters[0].points[6].x = 0;
letters[0].points[6].y = -5;
letters[0].points[7].x = 0;
letters[0].points[7].y = 0;
letters[0].points[8].x = 0;
letters[0].points[8].y = 0;
letters[0].points[9].x = 0;
letters[0].points[9].y = 0;
letters[0].points[10].x = 0;
letters[0].points[10].y = 0;
letters[0].points[11].x = 0;
letters[0].points[11].y = 0;
letters[0].points[12].x = 0;
letters[0].points[12].y = 0;
letters[1].letter = 'B';
letters[1].width = 7;
letters[1].arrLength = 9;
letters[1].points[0].x = 0;
letters[1].points[0].y = 5;
letters[1].points[1].x = 0;
letters[1].points[1].y = -5;
letters[1].points[2].x = 7;
letters[1].points[2].y = 0;
letters[1].points[3].x = 0;
letters[1].points[3].y = 5;
letters[1].points[4].x = -7;
letters[1].points[4].y = 0;
letters[1].points[5].x = 0;
letters[1].points[5].y = 5;
letters[1].points[6].x = 6;
letters[1].points[6].y = 0;
letters[1].points[7].x = 0;
letters[1].points[7].y = -5;
letters[1].points[8].x = 1;
letters[1].points[8].y = -5;
letters[1].points[9].x = 0;
letters[1].points[9].y = 0;
letters[1].points[10].x = 0;
letters[1].points[10].y = 0;
letters[1].points[11].x = 0;
letters[1].points[11].y = 0;
letters[1].points[12].x = 0;
letters[1].points[12].y = 0;
letters[2].letter = 'C';
letters[2].width = 6;
letters[2].arrLength = 5;
letters[2].points[0].x = 6;
letters[2].points[0].y = 10;
letters[2].points[1].x = -6;
letters[2].points[1].y = 0;
letters[2].points[2].x = 0;
letters[2].points[2].y = -10;
letters[2].points[3].x = 6;
letters[2].points[3].y = 0;
letters[2].points[4].x = 0;
letters[2].points[4].y = 0;
letters[2].points[5].x = 0;
letters[2].points[5].y = 0;
letters[2].points[6].x = 0;
letters[2].points[6].y = 0;
letters[2].points[7].x = 0;
letters[2].points[7].y = 0;
letters[2].points[8].x = 0;
letters[2].points[8].y = 0;
letters[2].points[9].x = 0;
letters[2].points[9].y = 0;
letters[2].points[10].x = 0;
letters[2].points[10].y = 0;
letters[2].points[11].x = 0;
letters[2].points[11].y = 0;
letters[2].points[12].x = 0;
letters[2].points[12].y = 0;
letters[3].letter = 'D';
letters[3].width = 6;
letters[3].arrLength = 8;
letters[3].points[0].x = 0;
letters[3].points[0].y = 0;
letters[3].points[1].x = 2;
letters[3].points[1].y = 0;
letters[3].points[2].x = 0;
letters[3].points[2].y = 10;
letters[3].points[3].x = -2;
letters[3].points[3].y = 0;
letters[3].points[4].x = 6;
letters[3].points[4].y = 0;
letters[3].points[5].x = 0;
letters[3].points[5].y = -10;
letters[3].points[6].x = -4;
letters[3].points[6].y = 0;
letters[3].points[7].x = 4;
letters[3].points[7].y = 0;
letters[3].points[8].x = 0;
letters[3].points[8].y = 0;
letters[3].points[9].x = 0;
letters[3].points[9].y = 0;
letters[3].points[10].x = 0;
letters[3].points[10].y = 0;
letters[3].points[11].x = 0;
letters[3].points[11].y = 0;
letters[3].points[12].x = 0;
letters[3].points[12].y = 0;
letters[4].letter = 'E';
letters[4].width = 6;
letters[4].arrLength = 8;
letters[4].points[0].x = 6;
letters[4].points[0].y = 10;
letters[4].points[1].x = -6;
letters[4].points[1].y = 0;
letters[4].points[2].x = 0;
letters[4].points[2].y = -5;
letters[4].points[3].x = 6;
letters[4].points[3].y = 0;
letters[4].points[4].x = -6;
letters[4].points[4].y = 0;
letters[4].points[5].x = 0;
letters[4].points[5].y = -5;
letters[4].points[6].x = 6;
letters[4].points[6].y = 0;
letters[4].points[7].x = 0;
letters[4].points[7].y = 0;
letters[4].points[8].x = 0;
letters[4].points[8].y = 0;
letters[4].points[9].x = 0;
letters[4].points[9].y = 0;
letters[4].points[10].x = 0;
letters[4].points[10].y = 0;
letters[4].points[11].x = 0;
letters[4].points[11].y = 0;
letters[4].points[12].x = 0;
letters[4].points[12].y = 0;
letters[5].letter = 'F';
letters[5].width = 5;
letters[5].arrLength = 7;
letters[5].points[0].x = 0;
letters[5].points[0].y = 0;
letters[5].points[1].x = 0;
letters[5].points[1].y = 5;
letters[5].points[2].x = 4;
letters[5].points[2].y = 0;
letters[5].points[3].x = -4;
letters[5].points[3].y = 0;
letters[5].points[4].x = 0;
letters[5].points[4].y = 5;
letters[5].points[5].x = 5;
letters[5].points[5].y = 0;
letters[5].points[6].x = 0;
letters[5].points[6].y = -10;
letters[5].points[7].x = 0;
letters[5].points[7].y = 0;
letters[5].points[8].x = 0;
letters[5].points[8].y = 0;
letters[5].points[9].x = 0;
letters[5].points[9].y = 0;
letters[5].points[10].x = 0;
letters[5].points[10].y = 0;
letters[5].points[11].x = 0;
letters[5].points[11].y = 0;
letters[5].points[12].x = 0;
letters[5].points[12].y = 0;
letters[6].letter = 'G';
letters[6].width = 5;
letters[6].arrLength = 7;
letters[6].points[0].x = 5;
letters[6].points[0].y = 10;
letters[6].points[1].x = -5;
letters[6].points[1].y = 0;
letters[6].points[2].x = 0;
letters[6].points[2].y = -10;
letters[6].points[3].x = 5;
letters[6].points[3].y = 0;
letters[6].points[4].x = 0;
letters[6].points[4].y = 4;
letters[6].points[5].x = -4;
letters[6].points[5].y = 0;
letters[6].points[6].x = 4;
letters[6].points[6].y = -4;
letters[6].points[7].x = 0;
letters[6].points[7].y = 0;
letters[6].points[8].x = 0;
letters[6].points[8].y = 0;
letters[6].points[9].x = 0;
letters[6].points[9].y = 0;
letters[6].points[10].x = 0;
letters[6].points[10].y = 0;
letters[6].points[11].x = 0;
letters[6].points[11].y = 0;
letters[6].points[12].x = 0;
letters[6].points[12].y = 0;
letters[7].letter = 'H';
letters[7].width = 5;
letters[7].arrLength = 7;
letters[7].points[0].x = 0;
letters[7].points[0].y = 0;
letters[7].points[1].x = 0;
letters[7].points[1].y = 10;
letters[7].points[2].x = 0;
letters[7].points[2].y = -5;
letters[7].points[3].x = 5;
letters[7].points[3].y = 0;
letters[7].points[4].x = 0;
letters[7].points[4].y = 5;
letters[7].points[5].x = 0;
letters[7].points[5].y = -10;
letters[7].points[6].x = 0;
letters[7].points[6].y = 0;
letters[7].points[7].x = 0;
letters[7].points[7].y = 0;
letters[7].points[8].x = 0;
letters[7].points[8].y = 0;
letters[7].points[9].x = 0;
letters[7].points[9].y = 0;
letters[7].points[10].x = 0;
letters[7].points[10].y = 0;
letters[7].points[11].x = 0;
letters[7].points[11].y = 0;
letters[7].points[12].x = 0;
letters[7].points[12].y = 0;
letters[8].letter = 'I';
letters[8].width = 8;
letters[8].arrLength = 7;
letters[8].points[0].x = 0;
letters[8].points[0].y = 0;
letters[8].points[1].x = 8;
letters[8].points[1].y = 0;
letters[8].points[2].x = -4;
letters[8].points[2].y = 0;
letters[8].points[3].x = 0;
letters[8].points[3].y = 10;
letters[8].points[4].x = -4;
letters[8].points[4].y = 0;
letters[8].points[5].x = 8;
letters[8].points[5].y = 0;
letters[8].points[6].x = 0;
letters[8].points[6].y = -10;
letters[8].points[7].x = 0;
letters[8].points[7].y = 0;
letters[8].points[8].x = 0;
letters[8].points[8].y = 0;
letters[8].points[9].x = 0;
letters[8].points[9].y = 0;
letters[8].points[10].x = 0;
letters[8].points[10].y = 0;
letters[8].points[11].x = 0;
letters[8].points[11].y = 0;
letters[8].points[12].x = 0;
letters[8].points[12].y = 0;
letters[9].letter = 'J';
letters[9].width = 7;
letters[9].arrLength = 6;
letters[9].points[0].x = 0;
letters[9].points[0].y = 0;
letters[9].points[1].x = 4;
letters[9].points[1].y = 0;
letters[9].points[2].x = 0;
letters[9].points[2].y = 10;
letters[9].points[3].x = -4;
letters[9].points[3].y = 0;
letters[9].points[4].x = 6;
letters[9].points[4].y = 0;
letters[9].points[5].x = 0;
letters[9].points[5].y = -10;
letters[9].points[6].x = 0;
letters[9].points[6].y = 0;
letters[9].points[7].x = 0;
letters[9].points[7].y = 0;
letters[9].points[8].x = 0;
letters[9].points[8].y = 0;
letters[9].points[9].x = 0;
letters[9].points[9].y = 0;
letters[9].points[10].x = 0;
letters[9].points[10].y = 0;
letters[9].points[11].x = 0;
letters[9].points[11].y = 0;
letters[9].points[12].x = 0;
letters[9].points[12].y = 0;
letters[10].letter = 'K';
letters[10].width = 6;
letters[10].arrLength = 9;
letters[10].points[0].x = 0;
letters[10].points[0].y = 0;
letters[10].points[1].x = 0;
letters[10].points[1].y = 10;
letters[10].points[2].x = 0;
letters[10].points[2].y = -5;
letters[10].points[3].x = 4;
letters[10].points[3].y = 0;
letters[10].points[4].x = 0;
letters[10].points[4].y = 5;
letters[10].points[5].x = 0;
letters[10].points[5].y = -5;
letters[10].points[6].x = 2;
letters[10].points[6].y = 0;
letters[10].points[7].x = 0;
letters[10].points[7].y = -5;
letters[10].points[8].x = 0;
letters[10].points[8].y = 0;
letters[10].points[9].x = 0;
letters[10].points[9].y = 0;
letters[10].points[10].x = 0;
letters[10].points[10].y = 0;
letters[10].points[11].x = 0;
letters[10].points[11].y = 0;
letters[10].points[12].x = 0;
letters[10].points[12].y = 0;
letters[11].letter = 'L';
letters[11].width = 6;
letters[11].arrLength = 4;
letters[11].points[0].x = 0;
letters[11].points[0].y = 10;
letters[11].points[1].x = 0;
letters[11].points[1].y = -10;
letters[11].points[2].x = 6;
letters[11].points[2].y = 0;
letters[11].points[3].x = 0;
letters[11].points[3].y = 0;
letters[11].points[4].x = 0;
letters[11].points[4].y = 0;
letters[11].points[5].x = 0;
letters[11].points[5].y = 0;
letters[11].points[6].x = 0;
letters[11].points[6].y = 0;
letters[11].points[7].x = 0;
letters[11].points[7].y = 0;
letters[11].points[8].x = 0;
letters[11].points[8].y = 0;
letters[11].points[9].x = 0;
letters[11].points[9].y = 0;
letters[11].points[10].x = 0;
letters[11].points[10].y = 0;
letters[11].points[11].x = 0;
letters[11].points[11].y = 0;
letters[11].points[12].x = 0;
letters[11].points[12].y = 0;
letters[12].letter = 'M';
letters[12].width = 10;
letters[12].arrLength = 9;
letters[12].points[0].x = 0;
letters[12].points[0].y = 0;
letters[12].points[1].x = 0;
letters[12].points[1].y = 10;
letters[12].points[2].x = 4;
letters[12].points[2].y = 0;
letters[12].points[3].x = 0;
letters[12].points[3].y = -10;
letters[12].points[4].x = 2;
letters[12].points[4].y = 0;
letters[12].points[5].x = 0;
letters[12].points[5].y = 10;
letters[12].points[6].x = 4;
letters[12].points[6].y = 0;
letters[12].points[7].x = 0;
letters[12].points[7].y = -10;
letters[12].points[8].x = 0;
letters[12].points[8].y = 0;
letters[12].points[9].x = 0;
letters[12].points[9].y = 0;
letters[12].points[10].x = 0;
letters[12].points[10].y = 0;
letters[12].points[11].x = 0;
letters[12].points[11].y = 0;
letters[12].points[12].x = 0;
letters[12].points[12].y = 0;
letters[13].letter = 'N';
letters[13].width = 6;
letters[13].arrLength = 5;
letters[13].points[0].x = 0;
letters[13].points[0].y = 0;
letters[13].points[1].x = 0;
letters[13].points[1].y = 10;
letters[13].points[2].x = 6;
letters[13].points[2].y = 0;
letters[13].points[3].x = 0;
letters[13].points[3].y = -10;
letters[13].points[4].x = 0;
letters[13].points[4].y = 0;
letters[13].points[5].x = 0;
letters[13].points[5].y = 0;
letters[13].points[6].x = 0;
letters[13].points[6].y = 0;
letters[13].points[7].x = 0;
letters[13].points[7].y = 0;
letters[13].points[8].x = 0;
letters[13].points[8].y = 0;
letters[13].points[9].x = 0;
letters[13].points[9].y = 0;
letters[13].points[10].x = 0;
letters[13].points[10].y = 0;
letters[13].points[11].x = 0;
letters[13].points[11].y = 0;
letters[13].points[12].x = 0;
letters[13].points[12].y = 0;
letters[14].letter = 'O';
letters[14].width = 8;
letters[14].arrLength = 6;
letters[14].points[0].x = 0;
letters[14].points[0].y = 0;
letters[14].points[1].x = 0;
letters[14].points[1].y = 10;
letters[14].points[2].x = 8;
letters[14].points[2].y = 0;
letters[14].points[3].x = 0;
letters[14].points[3].y = -10;
letters[14].points[4].x = -8;
letters[14].points[4].y = 0;
letters[14].points[5].x = 8;
letters[14].points[5].y = 0;
letters[14].points[6].x = 0;
letters[14].points[6].y = 0;
letters[14].points[7].x = 0;
letters[14].points[7].y = 0;
letters[14].points[8].x = 0;
letters[14].points[8].y = 0;
letters[14].points[9].x = 0;
letters[14].points[9].y = 0;
letters[14].points[10].x = 0;
letters[14].points[10].y = 0;
letters[14].points[11].x = 0;
letters[14].points[11].y = 0;
letters[14].points[12].x = 0;
letters[14].points[12].y = 0;
letters[15].letter = 'P';
letters[15].width = 5;
letters[15].arrLength = 6;
letters[15].points[0].x = 0;
letters[15].points[0].y = 0;
letters[15].points[1].x = 0;
letters[15].points[1].y = 10;
letters[15].points[2].x = 5;
letters[15].points[2].y = 0;
letters[15].points[3].x = 0;
letters[15].points[3].y = -5;
letters[15].points[4].x = -5;
letters[15].points[4].y = 0;
letters[15].points[5].x = 5;
letters[15].points[5].y = -5;
letters[15].points[6].x = 0;
letters[15].points[6].y = 0;
letters[15].points[7].x = 0;
letters[15].points[7].y = 0;
letters[15].points[8].x = 0;
letters[15].points[8].y = 0;
letters[15].points[9].x = 0;
letters[15].points[9].y = 0;
letters[15].points[10].x = 0;
letters[15].points[10].y = 0;
letters[15].points[11].x = 0;
letters[15].points[11].y = 0;
letters[15].points[12].x = 0;
letters[15].points[12].y = 0;
letters[16].letter = 'Q';
letters[16].width = 8;
letters[16].arrLength = 9;
letters[16].points[0].x = 4;
letters[16].points[0].y = 2;
letters[16].points[1].x = -4;
letters[16].points[1].y = 0;
letters[16].points[2].x = 0;
letters[16].points[2].y = 8;
letters[16].points[3].x = 8;
letters[16].points[3].y = 0;
letters[16].points[4].x = 0;
letters[16].points[4].y = -8;
letters[16].points[5].x = -4;
letters[16].points[5].y = 0;
letters[16].points[6].x = 0;
letters[16].points[6].y = -2;
letters[16].points[7].x = 4;
letters[16].points[7].y = 0;
letters[16].points[8].x = 0;
letters[16].points[8].y = 0;
letters[16].points[9].x = 0;
letters[16].points[9].y = 0;
letters[16].points[10].x = 0;
letters[16].points[10].y = 0;
letters[16].points[11].x = 0;
letters[16].points[11].y = 0;
letters[16].points[12].x = 0;
letters[16].points[12].y = 0;
letters[17].letter = 'R';
letters[17].width = 5;
letters[17].arrLength = 8;
letters[17].points[0].x = 0;
letters[17].points[0].y = 0;
letters[17].points[1].x = 0;
letters[17].points[1].y = 10;
letters[17].points[2].x = 4;
letters[17].points[2].y = 0;
letters[17].points[3].x = 0;
letters[17].points[3].y = -5;
letters[17].points[4].x = -4;
letters[17].points[4].y = 0;
letters[17].points[5].x = 5;
letters[17].points[5].y = 0;
letters[17].points[6].x = 0;
letters[17].points[6].y = -5;
letters[17].points[7].x = 0;
letters[17].points[7].y = 0;
letters[17].points[8].x = 0;
letters[17].points[8].y = 0;
letters[17].points[9].x = 0;
letters[17].points[9].y = 0;
letters[17].points[10].x = 0;
letters[17].points[10].y = 0;
letters[17].points[11].x = 0;
letters[17].points[11].y = 0;
letters[17].points[12].x = 0;
letters[17].points[12].y = 0;
letters[18].letter = 'S';
letters[18].width = 6;
letters[18].arrLength = 7;
letters[18].points[0].x = 0;
letters[18].points[0].y = 0;
letters[18].points[1].x = 6;
letters[18].points[1].y = 0;
letters[18].points[2].x = 0;
letters[18].points[2].y = 5;
letters[18].points[3].x = -6;
letters[18].points[3].y = 0;
letters[18].points[4].x = 0;
letters[18].points[4].y = 5;
letters[18].points[5].x = 6;
letters[18].points[5].y = 0;
letters[18].points[6].x = 0;
letters[18].points[6].y = -10;
letters[18].points[7].x = 0;
letters[18].points[7].y = 0;
letters[18].points[8].x = 0;
letters[18].points[8].y = 0;
letters[18].points[9].x = 0;
letters[18].points[9].y = 0;
letters[18].points[10].x = 0;
letters[18].points[10].y = 0;
letters[18].points[11].x = 0;
letters[18].points[11].y = 0;
letters[18].points[12].x = 0;
letters[18].points[12].y = 0;
letters[19].letter = 'T';
letters[19].width = 8;
letters[19].arrLength = 5;
letters[19].points[0].x = 4;
letters[19].points[0].y = 0;
letters[19].points[1].x = 0;
letters[19].points[1].y = 10;
letters[19].points[2].x = -4;
letters[19].points[2].y = 0;
letters[19].points[3].x = 8;
letters[19].points[3].y = 0;
letters[19].points[4].x = 0;
letters[19].points[4].y = -10;
letters[19].points[5].x = 0;
letters[19].points[5].y = 0;
letters[19].points[6].x = 0;
letters[19].points[6].y = 0;
letters[19].points[7].x = 0;
letters[19].points[7].y = 0;
letters[19].points[8].x = 0;
letters[19].points[8].y = 0;
letters[19].points[9].x = 0;
letters[19].points[9].y = 0;
letters[19].points[10].x = 0;
letters[19].points[10].y = 0;
letters[19].points[11].x = 0;
letters[19].points[11].y = 0;
letters[19].points[12].x = 0;
letters[19].points[12].y = 0;
letters[20].letter = 'U';
letters[20].width = 8;
letters[20].arrLength = 5;
letters[20].points[0].x = 0;
letters[20].points[0].y = 10;
letters[20].points[1].x = 0;
letters[20].points[1].y = -10;
letters[20].points[2].x = 8;
letters[20].points[2].y = 0;
letters[20].points[3].x = 0;
letters[20].points[3].y = 10;
letters[20].points[4].x = 0;
letters[20].points[4].y = -10;
letters[20].points[5].x = 0;
letters[20].points[5].y = 0;
letters[20].points[6].x = 0;
letters[20].points[6].y = 0;
letters[20].points[7].x = 0;
letters[20].points[7].y = 0;
letters[20].points[8].x = 0;
letters[20].points[8].y = 0;
letters[20].points[9].x = 0;
letters[20].points[9].y = 0;
letters[20].points[10].x = 0;
letters[20].points[10].y = 0;
letters[20].points[11].x = 0;
letters[20].points[11].y = 0;
letters[20].points[12].x = 0;
letters[20].points[12].y = 0;
letters[21].letter = 'V';
letters[21].width = 8;
letters[21].arrLength = 7;
letters[21].points[0].x = 0;
letters[21].points[0].y = 10;
letters[21].points[1].x = 2;
letters[21].points[1].y = 0;
letters[21].points[2].x = 0;
letters[21].points[2].y = -10;
letters[21].points[3].x = 4;
letters[21].points[3].y = 0;
letters[21].points[4].x = 0;
letters[21].points[4].y = 10;
letters[21].points[5].x = 2;
letters[21].points[5].y = 0;
letters[21].points[6].x = 0;
letters[21].points[6].y = -10;
letters[21].points[7].x = 0;
letters[21].points[7].y = 0;
letters[21].points[8].x = 0;
letters[21].points[8].y = 0;
letters[21].points[9].x = 0;
letters[21].points[9].y = 0;
letters[21].points[10].x = 0;
letters[21].points[10].y = 0;
letters[21].points[11].x = 0;
letters[21].points[11].y = 0;
letters[21].points[12].x = 0;
letters[21].points[12].y = 0;
letters[22].letter = 'W';
letters[22].width = 8;
letters[22].arrLength = 8;
letters[22].points[0].x = 0;
letters[22].points[0].y = 10;
letters[22].points[1].x = 0;
letters[22].points[1].y = -10;
letters[22].points[2].x = 4;
letters[22].points[2].y = 0;
letters[22].points[3].x = 0;
letters[22].points[3].y = 6;
letters[22].points[4].x = 0;
letters[22].points[4].y = -6;
letters[22].points[5].x = 4;
letters[22].points[5].y = 0;
letters[22].points[6].x = 0;
letters[22].points[6].y = 10;
letters[22].points[7].x = 0;
letters[22].points[7].y = -10;
letters[22].points[8].x = 0;
letters[22].points[8].y = 0;
letters[22].points[9].x = 0;
letters[22].points[9].y = 0;
letters[22].points[10].x = 0;
letters[22].points[10].y = 0;
letters[22].points[11].x = 0;
letters[22].points[11].y = 0;
letters[22].points[12].x = 0;
letters[22].points[12].y = 0;
letters[23].letter = 'X';
letters[23].width = 8;
letters[23].arrLength = 13;
letters[23].points[0].x = 0;
letters[23].points[0].y = 0;
letters[23].points[1].x = 0;
letters[23].points[1].y = 4;
letters[23].points[2].x = 8;
letters[23].points[2].y = 0;
letters[23].points[3].x = 0;
letters[23].points[3].y = -4;
letters[23].points[4].x = 0;
letters[23].points[4].y = 4;
letters[23].points[5].x = -4;
letters[23].points[5].y = 0;
letters[23].points[6].x = 0;
letters[23].points[6].y = 2;
letters[23].points[7].x = -4;
letters[23].points[7].y = 0;
letters[23].points[8].x = 0;
letters[23].points[8].y = 4;
letters[23].points[9].x = 0;
letters[23].points[9].y = -4;
letters[23].points[10].x = 8;
letters[23].points[10].y = 0;
letters[23].points[11].x = 0;
letters[23].points[11].y = 4;
letters[23].points[12].x = 0;
letters[23].points[12].y = -10;
letters[24].letter = 'Y';
letters[24].width = 6;
letters[24].arrLength = 8;
letters[24].points[0].x = 0;
letters[24].points[0].y = 10;
letters[24].points[1].x = 0;
letters[24].points[1].y = -6;
letters[24].points[2].x = 4;
letters[24].points[2].y = 0;
letters[24].points[3].x = 0;
letters[24].points[3].y = -4;
letters[24].points[4].x = 0;
letters[24].points[4].y = 4;
letters[24].points[5].x = 4;
letters[24].points[5].y = 0;
letters[24].points[6].x = 0;
letters[24].points[6].y = 6;
letters[24].points[7].x = 0;
letters[24].points[7].y = -10;
letters[24].points[8].x = 0;
letters[24].points[8].y = 0;
letters[24].points[9].x = 0;
letters[24].points[9].y = 0;
letters[24].points[10].x = 0;
letters[24].points[10].y = 0;
letters[24].points[11].x = 0;
letters[24].points[11].y = 0;
letters[24].points[12].x = 0;
letters[24].points[12].y = 0;
letters[25].letter = 'Z';
letters[25].width = 6;
letters[25].arrLength = 7;
letters[25].points[0].x = 0;
letters[25].points[0].y = 10;
letters[25].points[1].x = 6;
letters[25].points[1].y = 0;
letters[25].points[2].x = 0;
letters[25].points[2].y = -5;
letters[25].points[3].x = -6;
letters[25].points[3].y = 0;
letters[25].points[4].x = 0;
letters[25].points[4].y = -5;
letters[25].points[5].x = 6;
letters[25].points[5].y = 0;
letters[25].points[6].x = 0;
letters[25].points[6].y = 0;
letters[25].points[7].x = 0;
letters[25].points[7].y = 0;
letters[25].points[8].x = 0;
letters[25].points[8].y = 0;
letters[25].points[9].x = 0;
letters[25].points[9].y = 0;
letters[25].points[10].x = 0;
letters[25].points[10].y = 0;
letters[25].points[11].x = 0;
letters[25].points[11].y = 0;
letters[25].points[12].x = 0;
letters[25].points[12].y = 0;
letters[26].letter = '.';
letters[26].width = 1;
letters[26].arrLength = 6;
letters[26].points[0].x = 0;
letters[26].points[0].y = 0;
letters[26].points[1].x = 0;
letters[26].points[1].y = 1;
letters[26].points[2].x = 1;
letters[26].points[2].y = 0;
letters[26].points[3].x = 0;
letters[26].points[3].y = -1;
letters[26].points[4].x = -1;
letters[26].points[4].y = 0;
letters[26].points[5].x = 1;
letters[26].points[5].y = 0;
letters[26].points[6].x = 0;
letters[26].points[6].y = 0;
letters[26].points[7].x = 0;
letters[26].points[7].y = 0;
letters[26].points[8].x = 0;
letters[26].points[8].y = 0;
letters[26].points[9].x = 0;
letters[26].points[9].y = 0;
letters[26].points[10].x = 0;
letters[26].points[10].y = 0;
letters[26].points[11].x = 0;
letters[26].points[11].y = 0;
letters[26].points[12].x = 0;
letters[26].points[12].y = 0;
letters[27].letter = '-';
letters[27].width = 1;
letters[27].arrLength = 3;
letters[27].points[0].x = 0;
letters[27].points[0].y = 5;
letters[27].points[1].x = 4;
letters[27].points[1].y = 0;
letters[27].points[2].x = 0;
letters[27].points[2].y = -5;
letters[27].points[3].x = 0;
letters[27].points[3].y = 0;
letters[27].points[4].x = 0;
letters[27].points[4].y = 0;
letters[27].points[5].x = 0;
letters[27].points[5].y = 0;
letters[27].points[6].x = 0;
letters[27].points[6].y = 0;
letters[27].points[7].x = 0;
letters[27].points[7].y = 0;
letters[27].points[8].x = 0;
letters[27].points[8].y = 0;
letters[27].points[9].x = 0;
letters[27].points[9].y = 0;
letters[27].points[10].x = 0;
letters[27].points[10].y = 0;
letters[27].points[11].x = 0;
letters[27].points[11].y = 0;
letters[27].points[12].x = 0;
letters[27].points[12].y = 0;
}
