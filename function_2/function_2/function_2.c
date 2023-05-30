#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>

//void print()
//{
//	printf("haha\n");
//}
//
//void loop()
//{
//	int i = 0;
//	for (i = 0; i <= 3; i++)
//	{
//		print();
//	}
//}
//int main()
//{
//	loop();
//	return 0;
//}

//void loop()
//{
//
//	void print()
//	{
//		printf("haha\n");
//	}
//
//	int i = 0;
//	for (i = 0; i <= 3; i++)
//	{
//		print();
//	}
//}//这样的写法是错误的 不存在函数嵌套定义！！！

//#include <stdio.h>
//int main()
//{
//	printf("%d\n", strlen("abcdef"));
//	// 链式访问
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	printf("%d\n", strlen("abcdef"));
//	// 链式访问
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	printf("%d\n", printf("%d", printf("%d", 43)));// 输出为 4321 
//	// 链式访问
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	printf("%d\n", printf("%d ", printf("%d ", 43)));// 输出为 43 3 2
//	// 链式访问
//	return 0;
//}

//#include<stdio.h>
//
//int get_MAX(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int ret = get_MAX(a, b);
//	printf("%d\n", ret);
//	return 0;
//}

//#include<stdio.h>
//
//int get_MAX(int x, int y);
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int ret = get_MAX(a, b);
//	printf("%d\n", ret);
//	return 0;
//}
//
//int get_MAX(int x, int y)
//{
//	return x + y;
//}

//#include<stdio.h>
//#include "Add.h"
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int ret = get_MAX(a, b);//函数调用
//	printf("%d\n", ret);
//	return 0;
//}

//#include<stdio.h>
//int main()// 这是一个最简单的递归 
//{
//	printf("haha\n");
//	main();// 无线循环下去  成为死递归
//	return 0;
//}

//接受一个整型值（无符号），按照顺序打印它的每一位。 例如： 输入：1234，输出 1 2 3 4
//#include<stdio.h>
//
//void print(unsigned int x)
//{
//	if (x > 9)
//	{
//		print(x / 10);
//	}
//	printf("%d ", x % 10);
//}
//
//int main()
//{
//	
//	unsigned int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}



// 求字符串长度
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
// 

//编写函数不允许创建临时变量，求字符串的长度。
#include<stdio.h>
#include<string.h>
int my_strlen(char* s)
{
	if (*s == '\0')// *s 拿到的是初始地址 也就是第一个地址 a 的地址
		return 0;
	else
		return 1 + my_strlen(s + 1);//  s + 1 就是地址(指针）往后偏移 拿后面的地址
	// my_strlen("abc")
	// 1+my_strlen("bc")
    //1+1+my_strlen("c")
    //1+1+1+my_strlen("")
    //1+1+1+0
    //3
}
int main()
{
	char arr[] = "abc";
	// [a b c \0]
	int len = my_strlen(arr);// 数组名是首元素的地址 第一个元素的地址
	printf("%d\n", len);
	return 0;
}

