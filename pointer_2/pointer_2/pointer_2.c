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
//	//ָ������
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
//	//ָ������
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


//�����ṹ������
//struct Stu
//{
//	//��Ա�����������������ṹ������������Ե�
//	char name[20];
//	int age;
//	char sex[5];//�� Ů  ����
//} s2,s3,s4; //s2,s3,s4 ���ǽṹ����� - ȫ�ֱ���
//
//typedef struct Stu//��struct ����Ϊ Stu
//{
//	//��Ա�����������������ṹ������������Ե�
//	char name[20];
//	int age;
//	char sex[5];//�� Ů  ����
//} Stu;
//
//int main()
//{
//	//int a = 10;
//	struct Stu s1;//�ֲ�����
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
//	printf("%d %s %p\n", s3.a, s3.arr, s3.p);//. �ṹ��Ա���ʲ�����
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
//	//t.name = "����";//err name ������ ��������Ҫָ����� 
//	strcpy(t.name, "����");//�ַ�������
//}
//
//void print_stu(struct Stu t)
//{
//	printf("%s %d\n", t.name, t.age);
//}
//
//int main()
//{
//	struct Stu s = {0};//��ʼ��Ϊ0
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
////	strcpy((*ps).name, "����");
////}
//
//void set_stu(struct Stu* ps)
//{
//	ps->age = 20;//�ṹ��ָ��->�ṹ���Ա
//	//t.name = "����";//err
//	strcpy(ps->name, "����");//�ַ�������
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
//�ṹ�崫��
void print1(struct S s)
{
	printf("%d\n", s.num);
}
//�ṹ���ַ����
void print2(struct S* ps)
{
	printf("%d\n", ps->num);
}
int main()
{
	print1(s);  //���ṹ��
	print2(&s); //����ַ
	return 0;
}