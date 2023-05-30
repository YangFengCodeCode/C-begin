#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p == %p\n", p+i, &arr[i]);
//		//printf("%d ", *(p + i));
//	}
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int* p = &a;
//	int** pp = &p;
//	**pp = 100;
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "hello world";
//	char arr3[] = "cuihua";
//	//指针数组
//	char* parr[] = { arr1, arr2, arr3 };
//	// char ** p = parr;
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s\n", parr[i]);
//	}
//
//	/*char arr[] = "abcdef";
//	printf("%s\n", arr);*/
//	return 0;
//}


//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	//指针数组
//	int* parr[] = { arr1, arr2, arr3 };
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", *(parr[i] + j));
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//声明结构体类型
//struct Stu
//{
//	//成员变量，是用来描述结构体对象的相关属性的
//	char name[20];
//	int age;
//	char sex[5];//男 女  保密
//} s2,s3,s4; //s2,s3,s4 就是结构体变量 - 全局变量
//
//typedef struct Stu//把struct 定义为 Stu
//{
//	//成员变量，是用来描述结构体对象的相关属性的
//	char name[20];
//	int age;
//	char sex[5];//男 女  保密
//} Stu;
//
//int main()
//{
//	//int a = 10;
//	struct Stu s1;//局部变量
//	Stu s2;
//
//	return 0;
//}

//struct S
//{
//	int a;
//	char arr[5];
//	int* p;
//}s1 = {100, "bit", NULL};
//
//struct S s2 = {98, "hehe", NULL};
//
//struct B
//{
//	char ch[10];
//	struct S s;
//	double d;
//};
//
//int main()
//{
//	struct S s3 = {.arr = "abc", .p = NULL, .a = 1};
//	printf("%d %s %p\n", s3.a, s3.arr, s3.p);//. 结构成员访问操作符
//	struct B sb = { "hello", {20, "qqq", NULL}, 3.14};
//	printf("%s %d %s %p %.2lf\n", sb.ch, sb.s.a, sb.s.arr, sb.s.p, sb.d);
//
//	return 0;
//}


//#include <string.h>
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//void set_stu(struct Stu t)
//{
//	t.age = 20;
//	//t.name = "张三";//err name 是数组 传过来需要指针接收 
//	strcpy(t.name, "张三");//字符串拷贝
//}
//
//void print_stu(struct Stu t)
//{
//	printf("%s %d\n", t.name, t.age);
//}
//
//int main()
//{
//	struct Stu s = {0};//初始化为0
//	set_stu(s);
//	print_stu(s);
//	return 0;
//}



//struct Stu
//{
//	char name[20];
//	int age;
//};
//
////void set_stu(struct Stu* ps)
////{
////	(*ps).age = 20;
////	strcpy((*ps).name, "张三");
////}
//
//void set_stu(struct Stu* ps)
//{
//	ps->age = 20;//结构体指针->结构体成员
//	//t.name = "张三";//err
//	strcpy(ps->name, "张三");//字符串拷贝
//}
//
//
//void print_stu(struct Stu *t)
//{
//	printf("%s %d\n", t ->name, t->age);
//}
//
//int main()
//{
//	struct Stu s = { 0 };
//	set_stu(&s);
//	print_stu(&s);
//	return 0;
//}


struct S
{
	int data[1000];
	int num;
};
struct S s = { {1,2,3,4}, 1000 };
//结构体传参
void print1(struct S s)
{
	printf("%d\n", s.num);
}
//结构体地址传参
void print2(struct S* ps)
{
	printf("%d\n", ps->num);
}
int main()
{
	print1(s);  //传结构体
	print2(&s); //传地址
	return 0;
}