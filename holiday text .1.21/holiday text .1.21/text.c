#include<stdio.h>
#include"game.h"
void menu()
{
	printf("*********1.������Ϸ  0.�˳���Ϸ*********\n");
	printf("*********1.������Ϸ  0.�˳���Ϸ*********\n");
	printf("*********1.������Ϸ  0.�˳���Ϸ*********\n");
	printf("*********1.������Ϸ  0.�˳���Ϸ*********\n");
}
void game()
{
	char board[ROW][COL] = { 0 };
	Initboard(board, ROW, COL);//���������ʼ���������������ɣ�û��[]!!!!
	Displayboard(board, ROW, COL);//���ĵľŹ���
	//��ʼ���壬��������������������Ԫ�أ�
	while (1)
	{
		playermove(board, ROW, COL);//�������
		Displayboard(board, ROW, COL);//ÿһ���������ڴ�ӡһ�ζ��ĵľŹ���
		if (Judgment(board, ROW, COL) != 'c')//�ж�һ������Ӯû��
		{
			break;//*���ʤ��
			//#����ʤ��
			//pƽ��
			//c��������
		}
		Computermove(board, ROW, COL);//��������
		Displayboard(board, ROW, COL);//��ӡһ�ֽ����
		if (Judgment(board, ROW, COL) != 'c')
		{
			break;
		}
	}
	if (Judgment(board, ROW, COL) == '*')
	{
		printf("���ʤ��������������\n");
		printf("���ʤ��������������\n");
		printf("���ʤ��������������\n");
		printf("���ʤ��������������\n");
		printf("���ʤ��������������\n");
		printf("���ʤ��������������\n");
		printf("���ʤ��������������\n");
		printf("���ʤ��������������\n");

	}
	if (Judgment(board, ROW, COL) == '#')
	{
		printf("����ʤ����������������\n");
	}

	if (Judgment(board, ROW, COL) == 'p')
	{
		printf("��͵��Դ��˸�ƽ��\n");
	}
}
	void test()
	{
		int n = 0;//���n����д��do����
		srand((unsigned int)time(NULL));
		do
		{
			menu();
			printf("����������ѡ��ʼ�����˳�\n");

			scanf_s("%d", &n);
			switch (n)
			{
			case 1:
				printf("��ʼ��Ϸ\n");
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("�������������������......\n");
				break;
			}
		} while (n);
	}
	int main()
	{
		test();
		return 0;
	}
