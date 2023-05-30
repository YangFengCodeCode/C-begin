#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	int a = 100;
//	int * pa = &a;//pa是专门用来存放地址（指针）的，这里的pa就被称为指针变量
//	char* pc = &a;
//
//	//指针变量在32为平台下是4个字节
//	//指针变量在64为平台下是8个字节
//
//	//int arr[10];
//	//printf("%p\n", &a);
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(float *));
//	printf("%d\n", sizeof(double*));
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;//0x开头的是16进制数字
//	int * pa = &a;// int * 的指针解引用访问4个字符
//	*pa = 0;
//	return 0;
//}
//
//int main()
//{
//	int a = 0x11223344;//0x开头的是16进制数字
//	char* pa = &a;// char * 的指针解引用访问1个字节
//	*pa = 0;
//	return 0;
//}
//
//// short* --> 2
//// float* --> 4
//// double* -->8


//int main()
//{
//	int a = 0x11223344;//0x开头的是16进制数字
//
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//
//	printf("%p\n", pa+1);
//	printf("%p\n", pc+1);
//
//	return 0;
//}

//int main()
//{
//	int* p;//局部变量不初始化的时候，内容是随机值
//	*p = 20;
//	printf("%d\n", *p);
//
//	return 0;
//}

//int* test()
//{
//	int a = 110;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int arr[10] = { 0 };
//    int* p = arr;
//    int i = 0;
//    for (i = 0; i <= 11; i++)
//    {
//        //当指针指向的范围超出数组arr的范围时，p就是野指针
//        *(p++) = i;
//    }
//    return 0;
//}


//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	int* ptr = NULL;//ptr是一个空指针，没有指向任何有效的空间。这个指针不能直接使用
//	//int* ptr2;//野指针
//
//	if (ptr != NULL)
//	{
//		//使用
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	//不使用下标访问数组
//	int* p = &arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		*p = i;
//		p++;//p = p+1
//	}
//	p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));//p+i
//	}
//
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}*/
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%d ", arr[i]);//[] 操作符
//		printf("%d ", i[arr]);//[] 操作符
//	}
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);//?
//	printf("%d\n", &arr[0] - &arr[9]);//?
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	char ch[5] = {0};
//	//指针和指针相减的前提是：两个指针指向了同一块空间
//	printf("%d\n", &ch[4] - &arr[0]);//err
//
//	return 0;
//}

//int my_strlen(char* s)
//{
//	int count = 0;
//	while (*s != '\0')
//	{
//		count++;
//		s++;
//	}
//	return count;
//}

//int my_strlen(char* s)
//{
//	char* start = s;// 首元素地址放进 start
//	while (*s != '\0')
//	{
//		s++;
//	}
//	return s - start;//指针 - 指针
//}
//int main()
//{
//	char arr[10] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

#define N_VALUES 5
int main()
{
    float values[N_VALUES];
    float* vp;
    for (vp = &values[N_VALUES]; vp > &values[0];)
    {
        *--vp = 0;
    }
}