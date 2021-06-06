#include<iostream>
#include<conio.h>
#include<time.h>
#include"help.h"
#include<fstream>
using namespace std;
void cursor(int j, int i,int& prev_j, int& prev_i)
{
	int ver = 50, hor = 50;
	myLine(0 + j*hor, 12.5 + i*ver, 12.5 + j*hor, 0 + i*ver, 255);
	myLine(37.5 + j*hor, 0 + i*ver, 50 + j*hor, 12.5 + i*ver, 255);
	myLine(0+ j*hor, 37.5 + i*ver, 12.5 + j*hor, 50 + i*ver, 255);
	myLine(50 + j*hor, 37.5 + i*ver, 37.5 + j*hor, 50 + i*ver, 255);

	myLine(0 + prev_j*hor, 12.5 + prev_i*ver, 12.5 + prev_j*hor, 0 + prev_i*ver, 0);
	myLine(37.5 + prev_j*hor, 0 + prev_i*ver, 50 + prev_j*hor, 12.5 + prev_i*ver, 0);
	myLine(0 + prev_j*hor, 37.5 + prev_i*ver, 12.5 + prev_j*hor, 50 + prev_i*ver, 0);
	myLine(50 + prev_j*hor, 37.5 + prev_i*ver, 37.5 + prev_j*hor, 50 + prev_i*ver, 0);

	
	prev_j = j;
	prev_i = i;
}
void score_graphic(int score)
{
	int move = 0;
	myRect(498, 90, 838, 160, 255, 0, 0, 0, 0, 0);


	myLine(505 + move, 5, 520 + move, 5, 255);//TH
	myLine(525 + move, 35, 525 + move, 50, 255);//RBV
	myLine(505 + move, 55, 520 + move, 55, 255);//BH
	myLine(500 + move, 10, 500 + move, 25, 255);//LTV
	myLine(505 + move, 30, 520 + move, 30, 255);//MH
	move = move + 40;

	myLine(505 + move, 5, 520 + move, 5, 255);//TH
	myLine(505 + move, 55, 520 + move, 55, 255);//BH
	myLine(500 + move, 35, 500 + move, 50, 255);//LBV
	myLine(500 + move, 10, 500 + move, 25, 255);//LTV
	move = move + 40;

	myLine(505 + move, 5, 520 + move, 5, 255);//TH
	myLine(525 + move, 10, 525 + move, 25, 255);//RTV
	myLine(525 + move, 35, 525 + move, 50, 255);//RBV
	myLine(505 + move, 55, 520 + move, 55, 255);//BH
	myLine(500 + move, 35, 500 + move, 50, 255);//LBV
	myLine(500 + move, 10, 500 + move, 25, 255);//LTV
	move = move + 40;

	myLine(505 + move, 5, 520 + move, 5, 255);//TH
	myLine(500 + move, 35, 500 + move, 50, 255);//LBV
	myLine(500 + move, 10, 500 + move, 25, 255);//LTV
	move = move + 40;

	myLine(505 + move, 5, 520 + move, 5, 255);//TH
	myLine(505 + move, 55, 520 + move, 55, 255);//BH
	myLine(500 + move, 35, 500 + move, 50, 255);//LBV
	myLine(500 + move, 10, 500 + move, 25, 255);//LTV
	myLine(505 + move, 30, 520 + move, 30, 255);//MH
	move = move + 40;

	
	int position = 300, rem, score_array[10], index = 0;
	while (score > 0)
	{
		score_array[index] = score % 10;
		index++;
		score = score / 10;
	}
	for (int i = 0;i < index;i++)

	{
		score = score_array[i];
		myRect(498 + position, 98, 527 + position, 152, 0, 0, 0, 0, 0, 0);
		if (score == 0)
		{
			myLine(505 + position, 100, 520 + position, 100, 255);//TH
			myLine(525 + position, 105, 525 + position, 120, 255);//RTV
			myLine(525 + position, 130, 525 + position, 145, 255);//RBV
			myLine(505 + position, 150, 520 + position, 150, 255);//BH
			myLine(500 + position, 130, 500 + position, 145, 255);//LBV
			myLine(500 + position, 105, 500 + position, 120, 255);//LTV


		}
		if (score == 1)
		{

			myLine(525 + position, 105, 525 + position, 120, 255);//RTV
			myLine(525 + position, 130, 525 + position, 145, 255);//RBV

		}
		if (score == 2)
		{

			myLine(505 + position, 100, 520 + position, 100, 255);//TH
			myLine(525 + position, 105, 525 + position, 120, 255);//RTV

			myLine(505 + position, 150, 520 + position, 150, 255);//BH
			myLine(500 + position, 130, 500 + position, 145, 255);//LBV
			myLine(505 + position, 125, 520 + position, 125, 255);//MH


		}
		if (score == 3)
		{

			myLine(505 + position, 100, 520 + position, 100, 255);//TH
			myLine(525 + position, 105, 525 + position, 120, 255);//RTV
			myLine(525 + position, 130, 525 + position, 145, 255);//RBV
			myLine(505 + position, 150, 520 + position, 150, 255);//BH
			myLine(505 + position, 125, 520 + position, 125, 255);//MH


		}
		if (score == 4)
		{


			myLine(525 + position, 105, 525 + position, 120, 255);//RTV
			myLine(525 + position, 130, 525 + position, 145, 255);//RBV
			myLine(500 + position, 105, 500 + position, 120, 255);//LTV
			myLine(505 + position, 125, 520 + position, 125, 255);//MH

		}
		if (score == 5)
		{

			myLine(505 + position, 100, 520 + position, 100, 255);//TH
			myLine(525 + position, 130, 525 + position, 145, 255);//RBV
			myLine(505 + position, 150, 520 + position, 150, 255);//BH
			myLine(500 + position, 105, 500 + position, 120, 255);//LTV
			myLine(505 + position, 125, 520 + position, 125, 255);//MH


		}
		if (score == 6)
		{

			myLine(505 + position, 100, 520 + position, 100, 255);//TH
			myLine(525 + position, 130, 525 + position, 145, 255);//RBV
			myLine(505 + position, 150, 520 + position, 150, 255);//BH
			myLine(500 + position, 130, 500 + position, 145, 255);//LBV
			myLine(500 + position, 105, 500 + position, 120, 255);//LTV
			myLine(505 + position, 125, 520 + position, 125, 255);//MH


		}
		if (score == 7)
		{

			myLine(505 + position, 100, 520 + position, 100, 255);//TH
			myLine(525 + position, 105, 525 + position, 120, 255);//RTV
			myLine(525 + position, 130, 525 + position, 145, 255);//RBV



		}
		if (score == 8)
		{
			myLine(505 + position, 100, 520 + position, 100, 255);//TH
			myLine(525 + position, 105, 525 + position, 120, 255);//RTV
			myLine(525 + position, 130, 525 + position, 145, 255);//RBV
			myLine(505 + position, 150, 520 + position, 150, 255);//BH
			myLine(500 + position, 130, 500 + position, 145, 255);//LBV
			myLine(500 + position, 105, 500 + position, 120, 255);//LTV
			myLine(505 + position, 125, 520 + position, 125, 255);//MH


		}
		if (score == 9)
		{

			myLine(505 + position, 100, 520 + position, 100, 255);//TH
			myLine(525 + position, 105, 525 + position, 120, 255);//RTV
			myLine(525 + position, 130, 525 + position, 145, 255);//RBV
			myLine(505 + position, 150, 520 + position, 150, 255);//BH

			myLine(500 + position, 105, 500 + position, 120, 255);//LTV
			myLine(505 + position, 125, 520 + position, 125, 255);//MH

		}
		position = position - 50;
	}
}


void magic(int matrix[8][8],int&ins_score)
{
	

	for (int i = 0;i < 8;i++)
	{
		int count = 0;//counts no. of 8s
		for (int j = 0;j < 8;j++)
			if (matrix[j][i] == 8)
				count++;
		
		ins_score =ins_score+ count;
		

		
		for (int l = 0;l < count;l++)
		{
			for (int j = 0;j < 8;j++)
			{
				if (matrix[j][i] == 8)
				{
					
					if (j == 0)
						matrix[j][i] = rand() % 4;//TESTING!!!!!!!!!
					else
					{

						for (int k = j;k > 0;k--)
							matrix[k][i] = matrix[k - 1][i];
						matrix[0][i] = rand() % 4;
					}
				}
			}
		}
	}

}

void outmat(int matrix[8][8])
{
	for (int i = 0;i < 8;i++)
	{
		for (int j = 0;j < 8;j++)
			cout << matrix[i][j]<<" ";
		cout << endl;

	}
}
///*
void output(int matrix[8][8])
{
	myRect(0, 0, 400, 400, 0, 0, 0, 0, 0, 0);
	for (int y = 0, i = 0; y < 400; y = y + 50, i++)
	{
		for (int x = 0, j = 0; x < 400; x = x + 50, j++)
		{
			if (matrix[i][j] == 0)
				myEllipse(10 + x, 10 + y, 40 + x, 40 + y, 150, 189, 165, 254, 0, 0);
			if (matrix[i][j] == 10)
			{
				
					myEllipse1(10 + x, 10 + y, 40 + x, 40 + y, 150, 189, 165, 230, 45, 46);
				
			}
			if (matrix[i][j] == -10)
			{
				myEllipse2(10 + x, 10 + y, 40 + x, 40 + y, 0, 56, 24, 254, 0, 0);
				
			}
			if (matrix[i][j] == 1)
				myRect(10 + x, 10 + y, 40 + x, 40 + y, 255, 255, 255, 45, 254, 146);
			if (matrix[i][j] == -9)
				myRect2(10 + x, 10 + y, 40 + x, 40 + y, 0, 0, 0, 45, 254, 146);
			if (matrix[i][j] == 11)
			{
				myRect1(10 + x, 10 + y, 40 + x, 40 + y, 0, 0, 0, 45, 254, 146);
			}
			if (matrix[i][j] == 2) {
				penta(10 + x, 10 + y,223, 223, 223, 45, 0, 146);
				
			}
			if (matrix[i][j] == -8) {
				penta(10 + x, 10 + y, 223, 223, 0, 45, 0, 146);
			}
			if (matrix[i][j] == 12) {
				penta(10 + x, 10 + y, 223, 0, 0, 45, 0, 146);
			}
			if (matrix[i][j] == 3)
				diamond(10 + x, 10 + y, 223, 223, 223, 0, 100, 16);
			if (matrix[i][j] == 13)
				diamond(10 + x, 10 + y, 223, 0, 0, 0, 100, 16);
			if (matrix[i][j] == -7)
				diamond(10 + x, 10 + y, 223, 223, 0, 0, 100, 16);

			if (matrix[i][j] == 4)
			{
				triangle(10 + x, 10 + y, 223, 223, 223, 0, 100, 216);

			}
			if (matrix[i][j] == -6)
			{
				triangle(10 + x, 10 + y, 0, 223, 223, 0, 100, 216);

			}
			if (matrix[i][j] == 14)
			{
				triangle(10 + x, 10 + y, 223, 0, 223, 0, 100, 216);

			}
			if (matrix[i][j] == 8)
			{
				myRect(5 + x, 5 + y, 45 + x, 45 + y, 0, 255, 255, 0, 0, 0);
				//myCLine(0 + x, 0 + y, 50 + x, 0 + y, 255, 0, 0);
				//myCLine(50 + x, 0 + y, 50 + x, 50 + y, 255, 0, 0);
				//myCLine(50 + x, 50 + y, 0 + x, 50 + y, 255, 0, 0);
				//myCLine(0 + x, 50 + y, 0 + x, 0 + y, 255, 0, 0);
			}
		}
	}
}//*/
bool validswap(int matrix[8][8],int row,int col)
{
	bool valid = false;
	int swap_ver[2] = { 1,1 }, swap_hor[2];
	int ctrl_hor[20][3], index_hor = 0, index_ver = 0;//the first row is for verticals, 2nd is for horizontals and third is for frequency
	int ctrl_ver[20][3], index_firey = 0, index_blast = 0;
	int ctrl_firey[20][3], ctrl_blast[20][3];
	//checks for special jewels
	for (int i = 0;i < 8;i++)
		for (int j = 0;j < 8;j++)
		{
			if (matrix[i][j] >= 10)//checks for fireys 
			{
				ctrl_firey[index_firey][2] = matrix[i][j];
				matrix[i][j] = matrix[i][j] - 10;
				ctrl_firey[index_firey][0] = i;
				ctrl_firey[index_firey][1] = j;
				index_firey++;
			}
			else if (matrix[i][j] <= -1)//checks for blasters
			{
				ctrl_blast[index_blast][2] = matrix[i][j];
				matrix[i][j] = matrix[i][j] + 10;
				ctrl_blast[index_blast][0] = i;
				ctrl_blast[index_blast][1] = j;

				index_blast++;
			}
		}


	for (int ver = 0;ver < 8;ver++)//checks the number of horizontal matches
	{
		int jump_hor = 0;
		for (int hor = 0;hor < 6;hor++)
		{
			if (jump_hor > 0)
				jump_hor--;
			else if (matrix[ver][hor] == matrix[ver][hor + 1] && matrix[ver][hor] == matrix[ver][hor + 2])
			{

				ctrl_hor[index_hor][0] = ver;
				ctrl_hor[index_hor][1] = hor;
				ctrl_hor[index_hor][2] = 3;

				if (hor + 3 < 8 && matrix[ver][hor] == matrix[ver][hor + 3])//for a 4 matched
				{
					ctrl_hor[index_hor][2] = 4;
					jump_hor = 1;



					if (hor + 4 < 8 && matrix[ver][hor] == matrix[ver][hor + 4])//for a 5 matched
					{
						ctrl_hor[index_hor][2] = 5;
						jump_hor = 2;
					}

				}
				index_hor++;

			}

			//else
			//	jump_hor = 0;
		}
	}

	for (int hor = 0;hor < 8;hor++)//checks the number of vertical matches
	{
		int jump_ver = 0;
		for (int ver = 0;ver < 6;ver++)
		{
			if (jump_ver > 0)
				jump_ver--;
			else if (matrix[ver][hor] == matrix[ver + 1][hor] && matrix[ver][hor] == matrix[ver + 2][hor] && jump_ver == 0)
			{
				ctrl_ver[index_ver][0] = ver;
				ctrl_ver[index_ver][1] = hor;
				ctrl_ver[index_ver][2] = 3;
				if (ver + 3 < 8 && matrix[ver][hor] == matrix[ver + 3][hor])//for a 4 matched
				{
					ctrl_ver[index_ver][2] = 4;
					jump_ver = 1;

					if (ver + 4 < 8 && matrix[ver][hor] == matrix[ver + 4][hor])//for a 5 matched
					{
						ctrl_ver[index_ver][2] = 5;
						jump_ver = 2;


					}

				}
				index_ver++;

			}

		}
	}
	if (index_hor > 0 || index_ver > 0)//returns true if there is a match
	{
		valid = true;
	}


	/*output(matrix);
	cout << endl;
	for (int i = 0;i < index_hor;i++)
		cout << ctrl_hor[i][0] << " " << ctrl_hor[i][1] << " " << ctrl_hor[i][2] << endl;
	cout << index_hor << endl;
	for (int i = 0;i < index_ver;i++)
		cout << ctrl_ver[i][0] << " " << ctrl_ver[i][1] << " " << ctrl_ver[i][2] << endl;
	cout << index_ver << endl;

	for (int i = 0;i < index_firey;i++)
		cout << ctrl_firey[i][0] << " " << ctrl_firey[i][1] << endl;
	cout << index_firey << endl;*/


	for (int i = 0;i < index_firey;i++)//immunes the previous fireys
	{

		matrix[ctrl_firey[i][0]][ctrl_firey[i][1]] = ctrl_firey[i][2];
		//gotoxy(0, 0);
		//outmat(matrix);
		//_getch();

	}
	for (int i = 0;i < index_blast;i++)//immunes the previous blasters
	{

		matrix[ctrl_blast[i][0]][ctrl_blast[i][1]] = ctrl_blast[i][2];
		//gotoxy(0, 0);
		//outmat(matrix);
		//_getch();

	}

	int flag_blast = 0;

	//checks for the four possible formation orientations of blasting jewels and adds the newly formed blasters
	int inc_column = 0, inc_row = 0;
	for (int i = 0;i < index_hor;i++)
	{
		for (int j = 0;j < index_ver;j++)
		{   //top left corner
			if (ctrl_ver[j][2] == 4)
				inc_row = 1;//increment in row
			if (ctrl_hor[j][2] == 4)
				inc_column = 1;//increment in column
			if (ctrl_hor[i][0] == ctrl_ver[j][0] + inc_row && ctrl_hor[i][1] + inc_column == ctrl_ver[j][1])
			{
				if (-1<matrix[ctrl_hor[i][0]][ctrl_hor[i][1] + inc_column] && matrix[ctrl_ver[j][0] + inc_row][ctrl_ver[j][1]]<5)
					matrix[ctrl_hor[i][0]][ctrl_hor[i][1] + inc_column] = matrix[ctrl_hor[i][0]][ctrl_hor[i][1] + inc_column] - 10;
			}


			//top right corner
			if (ctrl_hor[i][0] == ctrl_ver[j][0] + inc_row && ctrl_hor[i][1] + 2 == ctrl_ver[j][1])
			{
				if (-1<matrix[ctrl_hor[i][0]][ctrl_ver[j][1]] && matrix[ctrl_ver[j][0] + inc_row][ctrl_hor[i][1] + 2]<5)
					matrix[ctrl_hor[i][0]][ctrl_ver[j][1]] = matrix[ctrl_hor[i][0]][ctrl_ver[j][1]] - 10;
			}
			//bottom left corner
			if (ctrl_hor[i][0] == ctrl_ver[j][0] + 2 && ctrl_hor[i][1] + inc_column == ctrl_ver[j][1])
			{
				if (-1<matrix[ctrl_hor[i][0]][ctrl_ver[j][1]] && matrix[ctrl_ver[j][0] + 2][ctrl_hor[i][1] + inc_column]<5)
					matrix[ctrl_hor[i][0]][ctrl_ver[j][1]] = matrix[ctrl_hor[i][0]][ctrl_ver[j][1]] - 10;

			}
			//bottom right corner
			if (ctrl_hor[i][0] == ctrl_ver[j][0] + 2 && ctrl_hor[i][1] + 2 == ctrl_ver[j][1])
			{
				if(-1<matrix[ctrl_hor[i][0]][ctrl_ver[j][1]]&& matrix[ctrl_hor[i][0]][ctrl_ver[j][1]]<5)
				matrix[ctrl_hor[i][0]][ctrl_ver[j][1]] = matrix[ctrl_hor[i][0]][ctrl_ver[j][1]] - 10;
			}

			inc_row = 0;
			inc_column = 0;

		}
	}
	
	//output(matrix);
	int flag_fire = 0;
	for (int i = 0;i < index_hor;i++)//add newly formed fierys
	{
		flag_fire = 0;
		if (ctrl_hor[i][2] == 4)
		{
			for (int j = i;j < i + 4;j++)//do not form new fierys if another special jem in its vacinity is activated
				if (matrix[ctrl_hor[i][0]][ctrl_hor[i][1] + j] >= 10 || matrix[ctrl_hor[i][0]][ctrl_hor[i][1] + j] <= -1)
					flag_fire = 1;
		
			if (flag_fire == 0)
			{

				if (col>=0 && ctrl_hor[i][1] + 1 == col || ctrl_hor[i][1] + 2 == col)
					matrix[ctrl_hor[i][0]][col] = matrix[ctrl_hor[i][0]][col] + 10;
				else
				matrix[ctrl_hor[i][0]][ctrl_hor[i][1] + 1] = matrix[ctrl_hor[i][0]][ctrl_hor[i][1] + 1] + 10;
			}
		}
	}
	for (int i = 0;i < index_ver;i++)
	{
		flag_fire = 0;
		if (ctrl_ver[i][2] == 4)
		{
			for (int j = i;j < i + 4;j++)//do not form new fierys if another special jem in its vacinity is activated
				if (matrix[ctrl_ver[i][0] + j][ctrl_ver[i][1]] >= 10 || matrix[ctrl_ver[i][0] + j][ctrl_ver[i][1]] <= -1)
					flag_fire = 1;
			if (flag_fire == 0)
			{
				if (row>=0 && ctrl_ver[i][0] + 1 == row || ctrl_ver[i][0] + 2 == row)
					matrix[row][ctrl_ver[i][1]] = matrix[row][ctrl_ver[i][1]] + 10;
				else
				matrix[ctrl_ver[i][0] + 1][ctrl_ver[i][1]] = matrix[ctrl_ver[i][0] + 1][ctrl_ver[i][1]] + 10;
			}
		}
	}

	for (int i = 0;i < index_firey;i++)//makes the previous firey accessible
	{

		matrix[ctrl_firey[i][0]][ctrl_firey[i][1]] = ctrl_firey[i][2] - 10;
		//gotoxy(0, 0);
		//outmat(matrix);
		//_getch();

	}
	for (int i = 0;i < index_blast;i++)//makes the previous blasters accessible
	{

		matrix[ctrl_blast[i][0]][ctrl_blast[i][1]] = ctrl_blast[i][2] + 10;
		//gotoxy(0, 0);
		//outmat(matrix);
		//_getch();

	}

	//turning all the matched jewels to 8
	for (int j = 0;j < index_hor;j++)
	{
		for (int i = 0;i < ctrl_hor[j][2];i++)
		{
			if (0 <= matrix[ctrl_hor[j][0]][ctrl_hor[j][1] + i] && matrix[ctrl_hor[j][0]][ctrl_hor[j][1] + i] < 10)
				matrix[ctrl_hor[j][0]][ctrl_hor[j][1] + i] = 8;


		}
	}
	for (int j = 0;j < index_ver;j++)
	{
		for (int i = 0;i < ctrl_ver[0][2];i++)
		{
			
			if (0 <= matrix[ctrl_ver[j][0] + i][ctrl_ver[j][1]] && matrix[ctrl_ver[j][0] + i][ctrl_ver[j][1]] < 10)
				matrix[ctrl_ver[j][0] + i][ctrl_ver[j][1]] = 8;
		}
	}
	int count = 1;
	while (count != 0)//for activation of a special jem due to actvation of another
	{
		count = 0;
		for (int i = 0;i < index_firey;i++)//activates the fiery
		{
			if (ctrl_firey[i][0] >= 0 && matrix[ctrl_firey[i][0]][ctrl_firey[i][1]] == 8)
			{
				for (int k = 1;k > -2;k--)
				{
					for (int l = 1;l > -2;l--)
					{
						if (ctrl_firey[i][0] - k >= 0 && ctrl_firey[i][1] - l >= 0)
						{
							matrix[ctrl_firey[i][0] - k][ctrl_firey[i][1] - l] = 8;
							count++;
						}
					}
				}



				for (int j = i;j + 1 < index_firey;j++)//discards the used up fiery
				{

					ctrl_firey[j][0] = ctrl_firey[j + 1][0];
					ctrl_firey[j][1] = ctrl_firey[j + 1][1];
					ctrl_firey[j][2] = ctrl_firey[j + 1][2];

				}
				index_firey--;

			}
		}
		for (int i = 0;i < index_blast;i++)//activates the blaster
		{
			if (matrix[ctrl_blast[i][0]][ctrl_blast[i][1]] == 8)
			{
				for (int j = 0;j < 8;j++)
				{
					matrix[ctrl_blast[i][0]][j] = 8;
					matrix[j][ctrl_blast[i][1]] = 8;

					count++;
				}
				for (int j = i;j + 1 < index_blast;j++)//discards the used up blaster
				{

					ctrl_blast[j][0] = ctrl_blast[j + 1][0];
					ctrl_blast[j][1] = ctrl_blast[j + 1][1];
					ctrl_blast[j][2] = ctrl_blast[j + 1][2];


				}
				index_blast--;

			}
		}
		
	}
	


	for (int i = 0;i < index_firey;i++)
	{
		matrix[ctrl_firey[i][0]][ctrl_firey[i][1]] = ctrl_firey[i][2];
		//gotoxy(0, 0);
		//outmat(matrix);
		//_getch();

	}
	for (int i = 0;i < index_blast;i++)
	{

		matrix[ctrl_blast[i][0]][ctrl_blast[i][1]] = ctrl_blast[i][2];
		//gotoxy(0, 0);
		//outmat(matrix);
		//_getch();

	}


	return valid;


}


void finale(int matrix[8][8],int&score)
{

	int count = 1,ins_score=0;

	while (count != 0)
	{
		count = 0;
		Sleep(50);
		magic(matrix,ins_score);
		output(matrix);
		
		
		for (int j = 0;j < 8;j++)
		{
			for (int i = 0;i < 7;i++)
			{
				if (validswap(matrix,-1,-1) == true)
				{
					
					count++;
					//cout << endl << count << endl;output(matrix);
					//_getch();
				}
			}
		}
		
		output(matrix);
		
	}
	
	score = score + ins_score;

	//cout << endl << count << endl;
	//output(matrix);
	//_getch();

}
void input(int matrix[8][8])
{
	int score = 0;
	srand(time(0));
	for (int i = 0;i < 8;i++)
	{
		for (int j = 0;j < 8;j++)
			matrix[i][j] = rand() % 5;


	}
	finale(matrix, score);

	for (int i = 0;i < 8;i++)
		for (int j = 0;j < 8;j++)
		{
			if (matrix[i][j] >= 10)
			{
				
				matrix[i][j] = matrix[i][j] - 10;
			}
			else if (matrix[i][j] <= -1)
			{
				
				matrix[i][j] = matrix[i][j] + 10;
				
			}
		}

}
void main()
{
	int swapped, x = 0, y = 0, key = 6,score=0,total=0;

	int flag_save = 0,flag_load=0;
	int ctrl_blast[10][2];
	//int ver_key, hor_key1, hor_key2,ver_key1,ver_key2,hor_key;//for no. of jewel matched
	int board[8][8] = { { 1,2,10,3,2,1,2,3 },{ 0,0,1,0,1,0,1,2 },{ 1,0,1,3,0,1,1,2 },{ 0,1,2,2,1,0,2,3 } ,{ 3,2,3,3,2,2,3,2 },{ 2,3,2,2,3,3,2,3 },{ 3,2,3,3,2,2,3,2 },{ 3,2,3,3,2,2,3,2 } }, vertical = 0, horizontal = 0, v_select = 0, h_select = 0, flag = 0;
	//{ {1, 0, 1, 1, 0, 0, 1, 0}, { 0,1,0,0,1,1,0,1 }, { 1,0,1,1,0,0,1,0 }, { 1,0,1,1,0,0,1,0 }, { 3,2,3,3,2,2,3,2 }, { 2,3,2,2,3,3,2,3 }, { 3,2,3,3,2,2,3,2 }, { 3,2,3,3,2,2,3,2 } }, vertical = 0, horizontal = 0, v_select = 0, h_select = 0, flag = 0;

	//{ { 1,2,10,3,2,1,2,3},{0,0,1,0,1,0,1,2},{1,0,1,3,0,1,1,2},{0,1,2,2,1,0,2,3},{1,0,2,0,3,3,0,3},{2,2,1,2,1,1,3,0},{3,1,2,1,2,2,3,0},{0,0,1,0,1,1,0,1} }, vertical = 0, horizontal = 0, v_select = 0, h_select = 0, flag = 0;
	
	input(board);
    //fair(board);

	output(board);
	gotoxy(0, 0);
	int final = time(NULL);
	int timer = 60;
	int prev_j = 2, prev_i = 2;
	
	int ctrl = 1;
	myRect(0, 420, 360, 450, 255, 255, 255, 255, 255, 255);
	while (difftime(time(NULL), final) <= timer)
	{
		
		myRect(0, 420, 360/timer * difftime(time(NULL), final), 450, 0, 0, 0, 0, 0, 0);



		if (isCursorKeyPressed(key) == true && ctrl != 0)
		{
			if (key == 2)//For moving the selector up.
			{
				if (vertical > 0)
				{

					vertical--;
					cursor(horizontal, vertical,prev_j,prev_i);
				}
			}
			if (key == 1)//For moving the selector left.
			{
				if (horizontal > 0)
				{
					horizontal--;
					cursor(horizontal, vertical, prev_j, prev_i);
				}
			}
			if (key == 3)//For moving the selector right.
			{
				if (horizontal < 7)
				{
					horizontal++;
					cursor(horizontal, vertical, prev_j, prev_i);
				}
			}
			if (key == 4)//For moving the selector down.
			{
				if (vertical < 7)
				{
					vertical++;
					cursor(horizontal,vertical, prev_j, prev_i);
					
				}
			}
			if (key == 6 && flag_save==0)
			{
				flag_save = 1;
				ofstream fout("save.txt");
				for (int x = 0;x < 8;x++)
					for (int y = 0;y < 8;y++)
						fout << board[x][y]<<" ";
				fout << score<<" ";
				fout << timer- difftime(time(NULL), final);
			}
			if (key == 7)
			{
				ifstream fin("save.txt");
				for (int x = 0;x < 8;x++)
					for (int y = 0;y < 8;y++)
					{
						fin >> board[x][y];
					}
				fin >> score;
				fin >> timer;
				final = time(NULL);
				score_graphic(score*10);
				output(board);
				myRect(0, 420, 360, 450, 255, 255, 255, 255, 255, 255);
				
			}
			if (key == 5)
			{
				
				ctrl = 0;
				flag_save = 0;
				
				
			}
		}

		
		if (ctrl==0)//Making the selection
		{
			
			
			v_select = vertical;
			h_select = horizontal;
			
			
				
				if (key == 2&& ctrl==0)//For moving the selected jewel up.
				{
					
					if (vertical > 0)
					{
						swap(board[v_select][h_select], board[v_select - 1][h_select]);
						if (vertical > 0 && ((validswap(board,v_select-1,h_select) == true)))//if this statement is false then the swap is valid

						{

							

							
							output(board);
							Sleep(50);
							finale(board,score);

							
						}
						else
						{
							swap(board[v_select][h_select], board[v_select - 1][h_select]);
							output(board);
						}

					}
					ctrl = 1;
				}
				if (key == 1 &&ctrl == 0)//For moving the selected jewel left.
				{
					if (horizontal > 0)
					{
						swap(board[v_select][h_select], board[v_select][h_select - 1]);
						if (horizontal > 0 && validswap(board, v_select, h_select-1) == true)

						{

						
							

							
							output(board);
							Sleep(50);
							finale(board, score);

						
						}
						else
						{
						swap(board[v_select][h_select], board[v_select][h_select - 1]);
						output(board);
						}

					}
					ctrl = 1;
				}
				if (key == 3 && ctrl == 0)//For moving the selected jewel right.
				{
					
					if (horizontal < 7)
					{

						swap(board[v_select][h_select], board[v_select][h_select + 1]);
						if (horizontal < 7 && ((validswap(board, v_select, h_select+1) == true)))

						{
							
							
							output(board);
							Sleep(50);
							finale(board, score);

							
						}
						else
						{
							swap(board[v_select][h_select], board[v_select][h_select + 1]);
							output(board);
						}
					}
					ctrl = 1;
				}
				if (key == 4 && ctrl == 0)//For moving the selected jewel down.
				{
					if (vertical < 7)
					{
						swap(board[v_select][h_select], board[v_select + 1][h_select]);
						if (vertical < 7 && ((validswap(board, v_select + 1, h_select) == true)))
						{
							
							output(board);
							Sleep(50);
							finale(board, score);

							



						}
						else
						{
							swap(board[v_select][h_select], board[v_select + 1][h_select]);
							output(board);
						}
						ctrl = 1;
						
					}
				}
			
				score_graphic(score*10);
		}
		
		
		
	}
	

	

	




}














	
