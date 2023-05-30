#define _CRT_SECURE_NO_WARNINGS 1

////拷贝一个字符串
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] ="hello world";
//	char arr2[20] = { 0 };
//	strcpy(arr2, arr1);
//	printf("%s", arr2);
//	return 0;
//}


//模拟strcpy

//#include<stdio.h>
//
//void my_strcpy(char* dest, char *source)
//{
//	int i = 0;
//	while (*source != '\0')
//	{
//		*dest = *source;
//		dest++;
//		source++;
//	}
//	*dest = *source;//拷贝 \0
//}
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[20] = { 0 };
//	my_strcpy(arr2, arr1);
//	printf("%s", arr2);
//	return 0;
//}


//#include<stdio.h>
//#include<assert.h>// assert 头文件
//
//void my_strcpy(char* dest, char* source)
//{
//	//断言
//	assert(dest != NULL);
//	assert(source != NULL);
//	while (*source != '\0')
//	{
//		*dest = *source;
//		dest++;
//		source++;
//	}
//	*dest = *source;//拷贝 \0
//}
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[20] = { 0 };
//	my_strcpy(arr2, arr1);
//	printf("%s", arr2);
//	return 0;
//}


//#include<stdio.h>
//#include<assert.h>// assert 头文件
//
//void my_strcpy(char* dest, char* source)
//{
//	//断言
//	assert(dest != NULL);
//	assert(source != NULL);
//	while (*source != '\0')
//	{
//		*dest = *source;
//		dest++;
//		source++;
//	}
//	*dest = *source;//拷贝 \0
//}
//int main()
//{
//	char arr1[] = NULL;
//	char arr2[20] = { 0 };
//	my_strcpy(arr2, arr1);
//	printf("%s", arr2);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//
//	const int n = 100;
//	n = 200;//err 不能改变n的值
//
//	const int* p = &n;
//	*p = 20;//不能改变指针变量指向的内容
//
//	printf("%d\n", n);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int m = 10;
//	int n  = 100;
//	const int * p = &m;
//	//*p = 0;//err
//	p = &n; //ok 指针变量是可以改变的 
//
//	printf("%d\n", *p);
//
//	return 0;
//}


//int main()
//{
//	int m = 10;
//	//cosnt 可以修饰指针
//	int n = 100;
//	int * const p = &m;
//	*p = 0;//ok  指针变量本身不能改变 但是指针变量所指向的空间可以改变
//	//p = &n; err
//
//	printf("%d\n", m);
//
//	return 0;
//}


#include<stdio.h>
#include<assert.h>// assert 头文件

char *my_strcpy(char* dest, const char* source)//source 指针变量所指向的内容不能改变
{
	int* ret = dest;//初始地址
	//断言
	assert(dest != NULL);
	assert(source != NULL);
	while (*dest++ = *source++)//先使用后加加 为0的时候跳出循环
		;//空语句
	return ret;//返回dest 初始地址  并用 char*接收
}
int main()
{
	char arr1[] = "hello world";
	char arr2[20] = { 0 };
	my_strcpy(arr2, arr1);
	printf("%s", arr2);
	return 0;
}


//#include<stdio.h>
//#include<assert.h>// assert 头文件
//
//void my_strcpy(char* dest, char* source)//source 指针变量所指向的内容不能改变
//{
//	//断言
//	assert(dest != NULL);
//	assert(source != NULL);
//	while (*source != '\0')
//	{
//		*source =* dest;
//		dest++;
//		source++;
//	}
//	*dest = *source;//拷贝 \0
//}
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[20] = { 0 };
//	my_strcpy(arr2, arr1);
//	printf("%s", arr2);
//	return 0;
//}


//模拟实现strlen函数

//#include<stdio.h>
//
//int my_strlen(const char* s)
//{
//	assert(s != NULL);
//	int count = 0;
//	while (*s)
//	{
//		count++;
//		s++;
//	}
//	return count;
//	
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	int len = my_strlen(arr1);
//	printf("%d\n", len);
//	return 0;
//}