#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	b = ((a > 5) ? (b = 3) : (b = -3));
//	/*if (a > 5)
//		b = 3;
//	else
//		b = -3*/;
//
//	return 0;
//}


//代码1
//int main()
//{
//    int a = 1;
//    int b = 2;
//    int c = (a > b, a = b + 10, a, b = a + 1);//逗号表达式
//    //c是多少？
//}
//        //代码2
//        if (a = b + 1, c = a / 2, d > 0)
//            //代码3
//            a = get_val();
//    count_val(a);
//    while (a > 0)
//    {
//        //业务处理
//        a = get_val();
//        count_val(a);
//    }
//    如果使用逗号表达式，改写：
//        while (a = get_val(), count_val(a), a > 0)
//        {
//            //业务处理
//        }
//}

//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//逗号表达式
//	//        1>2   a= 12       12  b=12 +1 = 13
//	printf("%d\n", a);//12
//	printf("%d\n", b);//13
//	printf("%d\n", c);//13
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5};
//	// 下标          0  1  2  3  4  5  6  7  8  9
//	//数组的起始是有下标的，下标是0开始的
//	printf("%d\n", arr[2]);//[] 下标引用操作符,  arr 和 2 是[] 的两个操作数
//	return 0;
//}

//#include<stdio.h>
//#include <string.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	int len = strlen("abc");//() 函数调用操作符
//	//() 的操作数是：strlen "abc"
//	printf("%d\n", len);
//
//	int c = Add(3, 5);//() 函数调用操作符
//	//() 的操作数是 Add 3 5
//	printf("%d\n", c);
//
//	test();
//	//对于函数调用操作符来说，最少有1个操作数
//	return 0;
//}


//#include<stdio.h>
//
//struct Book
//{
//	char name[30];//成员
//	char author[20];
//	float price;
//};//用分号
//int main()
//{
//	struct Book b1 = { "学好C语言","杨枫", 66.5f };
//	struct Book b2 = { "数据结构与算法","杨枫枫",99.9f };
//	printf("%s %s %.1f\n", b1.name, b1.author, b1.price);
//	printf("%s %s %.1f\n", b2.name, b2.author, b2.price);
//	return 0;
//}


//#include<stdio.h>
//
//struct Book
//{
//	char name[30];//成员
//	char author[20];
//	float price;
//};//用分号
//
//void Print(struct Book* p)
//{
//	//printf("%s %s %.1f\n", (*p).name, (*p).author, (*p).price);
//	printf("%s %s %.1f\n", p->name, p->author, p->price);
//	//                      结构体 -> 成员名
//}
//int main()
//{
//	struct Book b1 = { "学好C语言","杨枫", 66.5f };
//	struct Book b2 = { "数据结构与算法","杨枫枫",99.9f };
//	Print(&b1);
//	Print(&b2);
//	return 0;
//}

//int main()
//{
//	char c1 = 5;
//	//00000000000000000000000000000101  5
//	// char 类型只有一个字节 八个比特位 所以要截断
//	//00000101 - c1 (截断)
//	char c2 = 127;
//	//00000000000000000000000001111111
//	//01111111 - c2 （截断）
//	char c3 = c1 + c2;
//	//00000000000000000000000000000101  c1
//	//00000000000000000000000001111111  c2
//	//00000000000000000000000010000100  c1+c2
//	//10000100 - c3
//	//%d - 10进制的形式打印有符号的整数
//	//11111111111111111111111110000100 - 补码
//	//11111111111111111111111110000011 - 反码
//	//10000000000000000000000001111100 - 原码 --> -124
//	printf("%d\n", c3);
//	
//	return 0;
//}

////负数的整形提升
//char c1 = -1;
//变量c1的二进制位(补码)中只有8个比特位：
//1111111
//因为 char 为有符号的 char
//所以整形提升的时候，高位补充符号位，即为1
//提升之后的结果是：
//11111111111111111111111111111111
////正数的整形提升
//char c2 = 1;
//变量c2的二进制位(补码)中只有8个比特位：
//00000001
//因为 char 为有符号的 char
//所以整形提升的时候，高位补充符号位，即为0
//提升之后的结果是：
//00000000000000000000000000000001
////无符号整形提升，高位补0

//%d - 10进制的形式打印有符号的整数
//%u - 10进制的形式打印无符号的整数
//#include<stdio.h>
//int main()
//{
//	unsigned char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(-c));//4
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	float f = 3.14f;
//	int n = 10;
//	f + n;
//	return 0;
//}

