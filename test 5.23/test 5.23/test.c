#define _CRT_SECURE_NO_WARNINGS 1

////����һ���ַ���
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


//ģ��strcpy

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
//	*dest = *source;//���� \0
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
//#include<assert.h>// assert ͷ�ļ�
//
//void my_strcpy(char* dest, char* source)
//{
//	//����
//	assert(dest != NULL);
//	assert(source != NULL);
//	while (*source != '\0')
//	{
//		*dest = *source;
//		dest++;
//		source++;
//	}
//	*dest = *source;//���� \0
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
//#include<assert.h>// assert ͷ�ļ�
//
//void my_strcpy(char* dest, char* source)
//{
//	//����
//	assert(dest != NULL);
//	assert(source != NULL);
//	while (*source != '\0')
//	{
//		*dest = *source;
//		dest++;
//		source++;
//	}
//	*dest = *source;//���� \0
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
//	n = 200;//err ���ܸı�n��ֵ
//
//	const int* p = &n;
//	*p = 20;//���ܸı�ָ�����ָ�������
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
//	p = &n; //ok ָ������ǿ��Ըı�� 
//
//	printf("%d\n", *p);
//
//	return 0;
//}


//int main()
//{
//	int m = 10;
//	//cosnt ��������ָ��
//	int n = 100;
//	int * const p = &m;
//	*p = 0;//ok  ָ����������ܸı� ����ָ�������ָ��Ŀռ���Ըı�
//	//p = &n; err
//
//	printf("%d\n", m);
//
//	return 0;
//}


#include<stdio.h>
#include<assert.h>// assert ͷ�ļ�

char *my_strcpy(char* dest, const char* source)//source ָ�������ָ������ݲ��ܸı�
{
	int* ret = dest;//��ʼ��ַ
	//����
	assert(dest != NULL);
	assert(source != NULL);
	while (*dest++ = *source++)//��ʹ�ú�Ӽ� Ϊ0��ʱ������ѭ��
		;//�����
	return ret;//����dest ��ʼ��ַ  ���� char*����
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
//#include<assert.h>// assert ͷ�ļ�
//
//void my_strcpy(char* dest, char* source)//source ָ�������ָ������ݲ��ܸı�
//{
//	//����
//	assert(dest != NULL);
//	assert(source != NULL);
//	while (*source != '\0')
//	{
//		*source =* dest;
//		dest++;
//		source++;
//	}
//	*dest = *source;//���� \0
//}
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[20] = { 0 };
//	my_strcpy(arr2, arr1);
//	printf("%s", arr2);
//	return 0;
//}


//ģ��ʵ��strlen����

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