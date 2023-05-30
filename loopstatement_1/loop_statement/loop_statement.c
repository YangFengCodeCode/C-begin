//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf_s("%d", &n);
//	int ret = 1;
//	for (i = 0; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}


// 用while 循环打印 1~10 数字
//#include<stdio.h>
//int main()
//{
//	int i = 1;// 1 初始化
//	while (i <= 10)//2 判断
//	{
//		printf("%d ", i);
//		i++;//3 调整
//	}
//	return 0;
//}

// 用for 循环打印1~10数字
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//		printf("%d ", i);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i = 5;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	
//	for (; ;)
//	{
//		
//		printf("hehe ");
//	
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//
//	for (; i < 4; i++)
//	{
//		for (; j < 4; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int x = 0;
//	int y = 0;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//
//}

//循环几次？
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d\n", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;
//		printf("%d\n", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int ret = 1;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	int k = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		for(ret = 1; ret <= i; ret++)
//		{
//			ret = ret * k;
//
//		}
//		sum = sum + ret;
//	
//	}
//	printf("%d\n", sum);
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		ret = ret * i;
//			sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了 下标是%d\n", i);
//			break;
//		}
//	}
//	if (i == 10)
//	{
//		printf("没找到\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 17;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了 下标是%d\n", i);
//			break;
//		}
//	}
//	
//	
//		printf("没找到\n");
//	
//	return 0;
//}


