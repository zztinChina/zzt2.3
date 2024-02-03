#define ROW 3
#define COL 3
void Initboard(char  board[ROW][COL], int row, int col);
void Displayboard(char  board[ROW][COL], int row, int col);
void playermove(char board[ROW][COL], int row, int col);
void Computermove(char board[ROW][COL], int row, int col);
char Judgment(char board[ROW][COL], int row, int col);
int isping(char board[ROW][COL], int row, int col);

#include<stdlib.h>
#include<time.h>


