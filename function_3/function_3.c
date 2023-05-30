#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		 ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}


//#include<stdio.h>

// 循环（迭代）
//int fun(int n)
//{
//	int i = 0;
//	int r = 1;
//	for (i = 1; i <= n; i++)
//	{
//		r = r * i;
//	}
//	return r;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fun(n);
//	printf("%d\n", ret);
//	return 0;
//}

//#include<stdio.h>
////递归
//int fun(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fun(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fun(n);
//	printf("%d\n", ret);
//	return 0;
//}


//求第n个斐波那契数。（不考虑溢出）
// 1 1 2 3 5 8 13 .....
//前两个数的和是第三个数

//#include<stdio.h>
//
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}


#include<stdio.h>
//迭代
int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n >= 3)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d\n", ret);
	return 0;
}
