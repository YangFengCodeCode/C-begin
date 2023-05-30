#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
//1 2 3 4 5 6 7 8 9 10
//0 1 2 3 4 5 6 7 8 9
#include<stdio.h>

void Sort(int arr[10])
{
	int i = 0;
	int k = 0;
	for (i = 0, k=0; i < 10, k<5; i+=2, k++)
	{

		arr[k] = arr[i];
	}
	for (i = 1, k = 5; i < 10, k < 10; i += 2, k++)
	{

		arr[k] = arr[i];
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr);
	}
}
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	Sort(arr);
	return 0;
}
