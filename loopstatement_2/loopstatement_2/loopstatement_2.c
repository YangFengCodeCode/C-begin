//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n", sizeof(arr));// 一个int 类型4个字节 十个元素就是40个字节
//	printf("%d\n", sizeof(arr[0]));// 一个元素就是4个字节
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//总的字节数除以一个元素所占字节就是元素个数
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//
//	int left = 0;
//	int right = sz - 1;
//	int flag = 0;//做个flag 标记
//	while (left<=right)// 中间必须至少有一个元素 
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] == k)
//		{
//			printf("找到了, 下标是：%d\n", mid);
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
//		printf("没找到\n");
//	return 0;
//
//}

//#include<stdio.h>
//#include<string.h>// strlen 的头文件
//#include<windows.h>//Sleep 头文件
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	int right = strlen(arr1) - 1;//strlen 求字符串长度 - 1 刚好是最右边字符的下标
//
//	while (left <= right)
//	{
//		// 接下来我们要把arr1 的字符 拿下来到arr2
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//单位是毫秒
//		system("cls");// system函数可以执行系统 命令 cls是清理屏幕
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
//		printf("请输入密码：>");
//		scanf("%s", password);
//		//判断密码是否准确
//		// 两个字符串比较相等是不能用==的 应该用strcmp 库函数
//		//两个字符串比较相等是不能使用 == 的，应该使用strcmp库函数
//	    //strcmp返回0表示2个字符串相等
//		//strcmp返回>0的数字，表示第一个字符串大于第二个字符串
//		//strcmp返回<0的数字，表示第一个字符串小于第二个字符串
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//		
//	}
//	if (i == 3)
//		printf("退出程序\n");
//	return 0;
//}


