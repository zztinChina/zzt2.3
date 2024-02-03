#include"game.h"
#include<stdio.h>
void Initboard(char  board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void Displayboard(char  board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col - 1; j++)
		{
			printf(" %c |", board[i][j]);
		}
		printf(" %c \n", board[i][j]);
		int h = 0;
		for (h = 0; h < col - 1; h++)
		{
			printf("---|");
		}
		printf("---\n");
	}
}
void playermove(char board[ROW][COL], int row, int col)
{
	printf("尊贵的公主殿下，请下棋，输入坐标即可......\n");
	int m = 0;
	int n = 0;
error:
	scanf_s("%d%d", &m, &n);//之间有个逗号应该注意。
	//判断m,n的大小是否合法
	if (m >= 1 && m <= row, n >= 1 && n <= col)
	{
		if (board[m - 1][n - 1] == ' ')
		{
			board[m - 1][n - 1] = '*';
		}
		else
		{
			printf("您输入错位置了，请重新输入\n");
			goto error;
		}
	}
	else
	{
		printf("无法找到此坐标嘿嘿\n");
		goto error;
	}

}
int  isping(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;

}
void Computermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("接下来是由电脑输入......\n");

	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
char Judgment(char board[ROW][COL], int row, int col)
{
	// 先判断横行是否为三；
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	for (i = 0; i < row; i++)//判断竖行是否为三
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[0][0];//判断斜线是否为三；
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[0][0];//判断斜线是否为三；

	}
	if (isping(board, row, col) == 1)
	{
		return 'q';
	}
	return 'c';
}