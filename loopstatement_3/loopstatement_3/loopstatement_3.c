#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int main()//���һ���ػ�����
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ӭ��������˧��ĵ��Գ�����ĵ��Ի���60��ػ� ���� �����룺������  ��ĵ��ԲŲ���ػ�Ŷ\n");
//	scanf("%s", input);
//	if (0 == strcmp(input, "������"))
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("��ӭ��������˧��ĵ��Գ�����ĵ��Ի���60��ػ� ���� �����룺������  ��ĵ��ԲŲ���ػ�Ŷ\n");
//		scanf("%s", input);
//			if (0 == strcmp(input, "������"))
//			{
//				system("shutdown -a");
//				break;
//			}
//			else
//			{
//				printf("����\n");
//				if (0 == strcmp(input, "������"))
//				{
//					system("shutdown -a");
//					break;
//				}
//			}
//	}
//	return 0;
//}



//#include<stdio.h>
//#include<stdlib.h>// system ��ͷ�ļ�
//#include<string.h>// strcmp ��ͷ�ļ�

//int main()//���һ���ػ�����
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ӭ��������˧��ĵ��Գ�����ĵ��Ի���60��ػ� ���� �����룺������ ��ĵ��ԲŲ���ػ�Ŷ\n");
//	scanf("%s", input);
//	if (0 == strcmp(input, "������"))
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}
//
//

//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//		while (1)
//		{
//			printf("��ӭ��������˧��ĵ��Գ�����ĵ��Ի���60��ػ� ���� �����룺������ ��ĵ��ԲŲ���ػ�Ŷ\n");
//			scanf("%s", input);
//			if (0 == strcmp(input, "������"))
//			{
//				system("shutdown -a");
//					break;
//			}
//		}
//	return 0;
//}


void menu()
{
	printf("************************************************\n");
	printf("****  1.paly����1���룩   0.exit����0�˳��� ******\n");
	printf("************************************************\n");
}

#include<stdlib.h>// rand ͷ�ļ�
#include<time.h>//time����ͷ�ļ�

void game()
{
	// ���������
	//srand( (unsigned int) time(NULL));//��ʼ��rand Ҫ��srand �������ֵ ��ʱ���  void srand(unsigned int seed)
	int ret = rand() % 100 + 1;//  ��������� �������Χ�� 0~32767 int rand (void)
	int guess = 0;
	while (1)
	{
		//������
		
		printf("������֣�>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ��¶��ˣ�\n");
			break;
		}
	}
}


#include<stdio.h>
int main()
{
	//��ӡһ���˵�
	// 1 ����Ϸ
	// 0 �˳���Ϸ
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��������Ϸ\n");
			game();
			break;
		case 2:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		} 
	} while (input);// input Ϊ0 Ϊ�� �˳�ѭ�� 
	
		return 0;
}