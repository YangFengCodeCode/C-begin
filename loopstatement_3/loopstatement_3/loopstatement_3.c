#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int main()//设计一个关机程序
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("欢迎来到杨枫大帅哥的调试程序：你的电脑还有60秒关机 别不信 请输入：我是猪  你的电脑才不会关机哦\n");
//	scanf("%s", input);
//	if (0 == strcmp(input, "我是猪"))
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
//		printf("欢迎来到杨枫大帅哥的调试程序：你的电脑还有60秒关机 别不信 请输入：我是猪  你的电脑才不会关机哦\n");
//		scanf("%s", input);
//			if (0 == strcmp(input, "我是猪"))
//			{
//				system("shutdown -a");
//				break;
//			}
//			else
//			{
//				printf("别不信\n");
//				if (0 == strcmp(input, "我是猪"))
//				{
//					system("shutdown -a");
//					break;
//				}
//			}
//	}
//	return 0;
//}



//#include<stdio.h>
//#include<stdlib.h>// system 的头文件
//#include<string.h>// strcmp 的头文件

//int main()//设计一个关机程序
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("欢迎来到杨枫大帅哥的调试程序：你的电脑还有60秒关机 别不信 请输入：我是猪 你的电脑才不会关机哦\n");
//	scanf("%s", input);
//	if (0 == strcmp(input, "我是猪"))
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
//			printf("欢迎来到杨枫大帅哥的调试程序：你的电脑还有60秒关机 别不信 请输入：我是猪 你的电脑才不会关机哦\n");
//			scanf("%s", input);
//			if (0 == strcmp(input, "我是猪"))
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
	printf("****  1.paly（按1进入）   0.exit（按0退出） ******\n");
	printf("************************************************\n");
}

#include<stdlib.h>// rand 头文件
#include<time.h>//time函数头文件

void game()
{
	// 生成随机数
	//srand( (unsigned int) time(NULL));//初始化rand 要给srand 传个随机值 用时间戳  void srand(unsigned int seed)
	int ret = rand() % 100 + 1;//  产生随机数 随机数范围是 0~32767 int rand (void)
	int guess = 0;
	while (1)
	{
		//猜数字
		
		printf("请猜数字：>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你猜对了！\n");
			break;
		}
	}
}


#include<stdio.h>
int main()
{
	//打印一个菜单
	// 1 玩游戏
	// 0 退出游戏
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("猜数字游戏\n");
			game();
			break;
		case 2:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		} 
	} while (input);// input 为0 为假 退出循环 
	
		return 0;
}