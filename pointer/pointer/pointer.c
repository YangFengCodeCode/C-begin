#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	int a = 100;
//	int * pa = &a;//pa��ר��������ŵ�ַ��ָ�룩�ģ������pa�ͱ���Ϊָ�����
//	char* pc = &a;
//
//	//ָ�������32Ϊƽ̨����4���ֽ�
//	//ָ�������64Ϊƽ̨����8���ֽ�
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
//	int a = 0x11223344;//0x��ͷ����16��������
//	int * pa = &a;// int * ��ָ������÷���4���ַ�
//	*pa = 0;
//	return 0;
//}
//
//int main()
//{
//	int a = 0x11223344;//0x��ͷ����16��������
//	char* pa = &a;// char * ��ָ������÷���1���ֽ�
//	*pa = 0;
//	return 0;
//}
//
//// short* --> 2
//// float* --> 4
//// double* -->8


//int main()
//{
//	int a = 0x11223344;//0x��ͷ����16��������
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
//	int* p;//�ֲ���������ʼ����ʱ�����������ֵ
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
//        //��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
//        *(p++) = i;
//    }
//    return 0;
//}


//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	int* ptr = NULL;//ptr��һ����ָ�룬û��ָ���κ���Ч�Ŀռ䡣���ָ�벻��ֱ��ʹ��
//	//int* ptr2;//Ұָ��
//
//	if (ptr != NULL)
//	{
//		//ʹ��
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	//��ʹ���±��������
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
//		//printf("%d ", arr[i]);//[] ������
//		printf("%d ", i[arr]);//[] ������
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
//	//ָ���ָ�������ǰ���ǣ�����ָ��ָ����ͬһ��ռ�
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
//	char* start = s;// ��Ԫ�ص�ַ�Ž� start
//	while (*s != '\0')
//	{
//		s++;
//	}
//	return s - start;//ָ�� - ָ��
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