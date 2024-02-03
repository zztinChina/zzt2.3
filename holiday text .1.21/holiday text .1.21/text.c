#include<stdio.h>
#include"game.h"
void menu()
{
	printf("*********1.进入游戏  0.退出游戏*********\n");
	printf("*********1.进入游戏  0.退出游戏*********\n");
	printf("*********1.进入游戏  0.退出游戏*********\n");
	printf("*********1.进入游戏  0.退出游戏*********\n");
}
void game()
{
	char board[ROW][COL] = { 0 };
	Initboard(board, ROW, COL);//进行数组初始化；传数组名即可，没有[]!!!!
	Displayboard(board, ROW, COL);//恶心的九宫格搭建
	//开始下棋，即更改数组中坐标代表的元素；
	while (1)
	{
		playermove(board, ROW, COL);//玩家走旗
		Displayboard(board, ROW, COL);//每一次走完了在打印一次恶心的九宫格搭建
		if (Judgment(board, ROW, COL) != 'c')//判断一下有人赢没。
		{
			break;//*玩家胜出
			//#电脑胜出
			//p平局
			//c继续比赛
		}
		Computermove(board, ROW, COL);//电脑下棋
		Displayboard(board, ROW, COL);//打印一轮结果；
		if (Judgment(board, ROW, COL) != 'c')
		{
			break;
		}
	}
	if (Judgment(board, ROW, COL) == '*')
	{
		printf("玩家胜利！！！！！！\n");
		printf("玩家胜利！！！！！！\n");
		printf("玩家胜利！！！！！！\n");
		printf("玩家胜利！！！！！！\n");
		printf("玩家胜利！！！！！！\n");
		printf("玩家胜利！！！！！！\n");
		printf("玩家胜利！！！！！！\n");
		printf("玩家胜利！！！！！！\n");

	}
	if (Judgment(board, ROW, COL) == '#')
	{
		printf("电脑胜利！！！！！！！\n");
	}

	if (Judgment(board, ROW, COL) == 'p')
	{
		printf("你和电脑打了个平手\n");
	}
}
	void test()
	{
		int n = 0;//这个n不能写在do里面
		srand((unsigned int)time(NULL));
		do
		{
			menu();
			printf("请输入数字选择开始或者退出\n");

			scanf_s("%d", &n);
			switch (n)
			{
			case 1:
				printf("开始游戏\n");
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("您输入错误，请重新输入......\n");
				break;
			}
		} while (n);
	}
	int main()
	{
		test();
		return 0;
	}
