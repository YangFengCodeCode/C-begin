#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "hello world!!!";
//	char arr2[20] = "********************";
//	// 对于数组 数组名其实是数组第一个元素的地址 也就是起始地址
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "hello world!!!";
//	memset(arr, 'x', 5);//填充前五个
//	printf("%s\n", arr);
//	return 0;
//}



//int get_max(int x, int y)
//{
//	int z = (x> y ? x : y);
//	return z;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int ret = get_max(a, b);
//	printf("%d\n", ret);
//	return 0;
//}


void Swap(int x, int y)
{
	int tmp = x;
	x = y;
	y = tmp;

}

#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("交换前 a=%d b=%d\n", a, b);
	Swap(a, b);
	printf("交换后 a=%d b=%d", a, b);
	return 0;
}

//void Swap(int *px, int *py)//形参
//{
//	int tmp =* px;
//	*px = *py;
//	*py = tmp;
//
//}
//
//#include<stdio.h>
//int main()
//
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);//实参
//	printf("交换前 a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("交换后 a=%d b=%d", a, b);
//	return 0;
//}