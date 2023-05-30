#define _CRT_SECURE_NO_WARNINGS 1


#include "game.h"


void Menu()
{
	printf("****************************\n");
	printf("********1. play 按1开玩******\n");
	printf("********0. exit 按0退出******\n");
	printf("****************************\n");
}


void InitBoard(char board[ROW][COL], int row, int col)
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

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
			/*printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
			if (i < row - 1)
				printf("---|---|---\n");*/
		int j = 0;
		//打印数据
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//打印分割线
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	printf("玩家下棋\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')//可以落子
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else//不能落子
			{
				printf("非法占有 请重新输入\n");
			}
		}
		else
			printf("超出范围 请重新输入\n");
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;// x<row-1
	int y = 0;// y<col-1
	printf("电脑下棋\n");
	
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

int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//行
	for (i = 0; i < row; i++)
	{
		int j = 0;
		while (1)
		{
			if (board[i][j] == board[i][j + 1] && board[i][j] != ' ')
			{
				
				if (j+1 == row - 1)
				{
					return board[i][j];
					break;
				}
				j++;
			}
			else
				break;
		}
				

		/*if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] != ' ')
		{
			return board[i][2];
		}*/
	}
	//列
	for (i = 0; i < col; i++)
	{
		int j = 0;
		while (1)
		{
			if (board[j][i] == board[j + 1][i] && board[j][i] != ' ')
			{

				if (j + 1 == col - 1)
				{
					return board[i][j];
					break;
				}
				j++;
			}
			else
				break;
		}
	}
	//对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		return board[1][1];
	//平局
	if (IsFull(board, row, col) == 1)
	{
		return 'Q';
	}
	//继续
	return 'C';
}