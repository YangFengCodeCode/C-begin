//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n", sizeof(arr));// һ��int ����4���ֽ� ʮ��Ԫ�ؾ���40���ֽ�
//	printf("%d\n", sizeof(arr[0]));// һ��Ԫ�ؾ���4���ֽ�
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//�ܵ��ֽ�������һ��Ԫ����ռ�ֽھ���Ԫ�ظ���
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//
//	int left = 0;
//	int right = sz - 1;
//	int flag = 0;//����flag ���
//	while (left<=right)// �м����������һ��Ԫ�� 
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] == k)
//		{
//			printf("�ҵ���, �±��ǣ�%d\n", mid);
//			flag = 1;
//			break;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			right = mid - 1;
//		}
//	}
//	if (flag == 0)
//		printf("û�ҵ�\n");
//	return 0;
//
//}

//#include<stdio.h>
//#include<string.h>// strlen ��ͷ�ļ�
//#include<windows.h>//Sleep ͷ�ļ�
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	int right = strlen(arr1) - 1;//strlen ���ַ������� - 1 �պ������ұ��ַ����±�
//
//	while (left <= right)
//	{
//		// ����������Ҫ��arr1 ���ַ� ��������arr2
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//��λ�Ǻ���
//		system("cls");// system��������ִ��ϵͳ ���� cls��������Ļ
//		left++;
//		right--;
//	}
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺>");
//		scanf("%s", password);
//		//�ж������Ƿ�׼ȷ
//		// �����ַ����Ƚ�����ǲ�����==�� Ӧ����strcmp �⺯��
//		//�����ַ����Ƚ�����ǲ���ʹ�� == �ģ�Ӧ��ʹ��strcmp�⺯��
//	    //strcmp����0��ʾ2���ַ������
//		//strcmp����>0�����֣���ʾ��һ���ַ������ڵڶ����ַ���
//		//strcmp����<0�����֣���ʾ��һ���ַ���С�ڵڶ����ַ���
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//		
//	}
//	if (i == 3)
//		printf("�˳�����\n");
//	return 0;
//}


