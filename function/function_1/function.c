#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "hello world!!!";
//	char arr2[20] = "********************";
//	// �������� ��������ʵ�������һ��Ԫ�صĵ�ַ Ҳ������ʼ��ַ
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "hello world!!!";
//	memset(arr, 'x', 5);//���ǰ���
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
	printf("����ǰ a=%d b=%d\n", a, b);
	Swap(a, b);
	printf("������ a=%d b=%d", a, b);
	return 0;
}

//void Swap(int *px, int *py)//�β�
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
//	scanf("%d %d", &a, &b);//ʵ��
//	printf("����ǰ a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("������ a=%d b=%d", a, b);
//	return 0;
//}