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


//����1
//int main()
//{
//    int a = 1;
//    int b = 2;
//    int c = (a > b, a = b + 10, a, b = a + 1);//���ű��ʽ
//    //c�Ƕ��٣�
//}
//        //����2
//        if (a = b + 1, c = a / 2, d > 0)
//            //����3
//            a = get_val();
//    count_val(a);
//    while (a > 0)
//    {
//        //ҵ����
//        a = get_val();
//        count_val(a);
//    }
//    ���ʹ�ö��ű��ʽ����д��
//        while (a = get_val(), count_val(a), a > 0)
//        {
//            //ҵ����
//        }
//}

//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//���ű��ʽ
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
//	// �±�          0  1  2  3  4  5  6  7  8  9
//	//�������ʼ�����±�ģ��±���0��ʼ��
//	printf("%d\n", arr[2]);//[] �±����ò�����,  arr �� 2 ��[] ������������
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
//	int len = strlen("abc");//() �������ò�����
//	//() �Ĳ������ǣ�strlen "abc"
//	printf("%d\n", len);
//
//	int c = Add(3, 5);//() �������ò�����
//	//() �Ĳ������� Add 3 5
//	printf("%d\n", c);
//
//	test();
//	//���ں������ò�������˵��������1��������
//	return 0;
//}


//#include<stdio.h>
//
//struct Book
//{
//	char name[30];//��Ա
//	char author[20];
//	float price;
//};//�÷ֺ�
//int main()
//{
//	struct Book b1 = { "ѧ��C����","���", 66.5f };
//	struct Book b2 = { "���ݽṹ���㷨","����",99.9f };
//	printf("%s %s %.1f\n", b1.name, b1.author, b1.price);
//	printf("%s %s %.1f\n", b2.name, b2.author, b2.price);
//	return 0;
//}


//#include<stdio.h>
//
//struct Book
//{
//	char name[30];//��Ա
//	char author[20];
//	float price;
//};//�÷ֺ�
//
//void Print(struct Book* p)
//{
//	//printf("%s %s %.1f\n", (*p).name, (*p).author, (*p).price);
//	printf("%s %s %.1f\n", p->name, p->author, p->price);
//	//                      �ṹ�� -> ��Ա��
//}
//int main()
//{
//	struct Book b1 = { "ѧ��C����","���", 66.5f };
//	struct Book b2 = { "���ݽṹ���㷨","����",99.9f };
//	Print(&b1);
//	Print(&b2);
//	return 0;
//}

//int main()
//{
//	char c1 = 5;
//	//00000000000000000000000000000101  5
//	// char ����ֻ��һ���ֽ� �˸�����λ ����Ҫ�ض�
//	//00000101 - c1 (�ض�)
//	char c2 = 127;
//	//00000000000000000000000001111111
//	//01111111 - c2 ���ضϣ�
//	char c3 = c1 + c2;
//	//00000000000000000000000000000101  c1
//	//00000000000000000000000001111111  c2
//	//00000000000000000000000010000100  c1+c2
//	//10000100 - c3
//	//%d - 10���Ƶ���ʽ��ӡ�з��ŵ�����
//	//11111111111111111111111110000100 - ����
//	//11111111111111111111111110000011 - ����
//	//10000000000000000000000001111100 - ԭ�� --> -124
//	printf("%d\n", c3);
//	
//	return 0;
//}

////��������������
//char c1 = -1;
//����c1�Ķ�����λ(����)��ֻ��8������λ��
//1111111
//��Ϊ char Ϊ�з��ŵ� char
//��������������ʱ�򣬸�λ�������λ����Ϊ1
//����֮��Ľ���ǣ�
//11111111111111111111111111111111
////��������������
//char c2 = 1;
//����c2�Ķ�����λ(����)��ֻ��8������λ��
//00000001
//��Ϊ char Ϊ�з��ŵ� char
//��������������ʱ�򣬸�λ�������λ����Ϊ0
//����֮��Ľ���ǣ�
//00000000000000000000000000000001
////�޷���������������λ��0

//%d - 10���Ƶ���ʽ��ӡ�з��ŵ�����
//%u - 10���Ƶ���ʽ��ӡ�޷��ŵ�����
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

