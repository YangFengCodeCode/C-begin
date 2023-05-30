#define _CRT_SECURE_NO_WARNINGS 1


#include "game.h"


void Menu()
{
	printf("****************************\n");
	printf("********1. play ��1����******\n");
	printf("********0. exit ��0�˳�******\n");
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
		//��ӡ����
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//��ӡ�ָ���
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
	printf("�������\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')//��������
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else//��������
			{
				printf("�Ƿ�ռ�� ����������\n");
			}
		}
		else
			printf("������Χ ����������\n");
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;// x<row-1
	int y = 0;// y<col-1
	printf("��������\n");
	
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
	//��
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
	//��
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
	//�Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		return board[1][1];
	//ƽ��
	if (IsFull(board, row, col) == 1)
	{
		return 'Q';
	}
	//����
	return 'C';
}