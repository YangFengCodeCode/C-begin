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
//}//������д���Ǵ���� �����ں���Ƕ�׶��壡����

//#include <stdio.h>
//int main()
//{
//	printf("%d\n", strlen("abcdef"));
//	// ��ʽ����
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	printf("%d\n", strlen("abcdef"));
//	// ��ʽ����
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	printf("%d\n", printf("%d", printf("%d", 43)));// ���Ϊ 4321 
//	// ��ʽ����
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	printf("%d\n", printf("%d ", printf("%d ", 43)));// ���Ϊ 43 3 2
//	// ��ʽ����
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
//	int ret = get_MAX(a, b);//��������
//	printf("%d\n", ret);
//	return 0;
//}

//#include<stdio.h>
//int main()// ����һ����򵥵ĵݹ� 
//{
//	printf("haha\n");
//	main();// ����ѭ����ȥ  ��Ϊ���ݹ�
//	return 0;
//}

//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�� ���磺 ���룺1234����� 1 2 3 4
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



// ���ַ�������
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

//��д��������������ʱ���������ַ����ĳ��ȡ�
#include<stdio.h>
#include<string.h>
int my_strlen(char* s)
{
	if (*s == '\0')// *s �õ����ǳ�ʼ��ַ Ҳ���ǵ�һ����ַ a �ĵ�ַ
		return 0;
	else
		return 1 + my_strlen(s + 1);//  s + 1 ���ǵ�ַ(ָ�룩����ƫ�� �ú���ĵ�ַ
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
	int len = my_strlen(arr);// ����������Ԫ�صĵ�ַ ��һ��Ԫ�صĵ�ַ
	printf("%d\n", len);
	return 0;
}

