#include <stdio.h>
#include<string.h>
#include<assert.h>
#include<math.h>
#include<stdlib.h>
//用筛选法求n以内的素数。筛选法求解过程为：将2~n之间的正整数放在数组内存储，将数组中2之后的所有能被2整除的数清0，再将3之后的所有能被3整除的数清0 ，以此类推，直到n为止。数组中不为0 的数即为素数

//int main()
//{
//	int n = 0, i, j, count = 0;
//	scanf("%d\n", &n);
//	int arr[20];
//	for (i = 2; i < n; i++)
//	{
//		arr[i] = i;
//	}
//	//被整除的赋予0
//	for (i = 2; i < n; i++)
//	{
//		for (j = i + 1; j < n; j++)
//		{
//			if (j%i == 0)
//			{
//				arr[j] = 0;
//			}
//		}
//	}
//	for (i = 2; i < n; i++)
//	{
//		if (arr[i] == 0)
//		{
//			count++;//计数0
//		}
//		else
//		{
//			printf("%d\n", &arr[i]);
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//一行，1~N之间奇数的个数和偶数的个数，用空格分开。
//int main()
//{
//	int N;
//	scanf("%d\n", &N);
//	int arr[5];
//	int i, count1 = 0, count2 = 0;
//	for (i = 1; i <= N; i++)
//	{
//		arr[i-1] = i;
//	}
//	for (i = 0; i < N; i++)
//	{
//		if (arr[i] % 2 == 0)
//		{
//			count1++;
//		}
//		else if (arr[i] % 2 == 1)
//		{
//			count2++;
//		}
//	}
//	printf("%d %d\n", count2, count1);
//	return 0;
//}

//有个软件系统登录的用户名和密码为（用户名：admin，密码：admin），用户输入用户名和密码，判断是否登录成功。
//int main()
//{
//	char str1[20];
//	char str2[20];
//	char ad[6] = "admin";
//	scanf("%s%s\n", str1, str2);
//	if (strcmp(str1, ad) == 0 && strcmp(str2, ad) == 0)
//	{
//		printf("Login Success!");
//	}
//	else
//	{
//		printf("Login Fail!");
//	}
//	return 0;

	//输入NxM矩阵，矩阵元素均为整数，计算其中大于零的元素之和。
	//int main()
	//{
	//	int n, m;
	//	scanf("%d%d\n", &n, &m);
	//	int arr[n][m];
	//	int i, j;
	//	for (i = 0; i < n; i++)
	//	{
	//		for (j = 0; j < m; j++)
	//		{
	//			scanf("%d", &arr[i][j]);
	//		}
	//	}
	//	int sum = 0;
	//	for (i = 0; i < n; i++)
	//	{
	//		for (j = 0; j < m; j++)
	//		{
	//			if (arr[i][j] > 0)
	//			{
	//				sum += arr[i][j];
	//			}
	//		}
	//	}
	//	printf("%d\n", sum);
	//	return 0;
	//}

	//输入10个整数（范围-231~231-1），用空格分隔
	//int main()
	//{
	//	int count1 = 0, count2 = 0;
	//	int arr[10];
	//	int i;
	//	for (i = 0; i<10; i++)
	//	{
	//		scanf("%d", &arr[i]);
	//	}
	//	for (i = 0; i<10; i++)
	//	{
	//		if (arr[i]>0)
	//		{
	//			count1++;
	//		}
	//		else if (arr[i]<0)
	//		{
	//			count2++;
	//		}
	//	}
	//	printf("positive:%d\n", count1);
	//	printf("negative:%d\n", count2);
	//	return 0;
	//}

	//输出最大值与最小值之差
	//int main()
	//{
	//	int N = 0, max = 0, min = 0;
	//	scanf("%d\n", &N);
	//	int i;
	//	int arr[N];
	//	for (i = 0; i < N; i++)
	//	{
	//		scanf("%d", &arr[i]);
	//		if (arr[i] > max)
	//		{
	//			max = arr[i];
	//		}
	//	}
	//	min = arr[0];
	//	for (i = 0; i < N; i++)
	//	{
	//		if (arr[i] < min)
	//		{
	//			min = arr[i];
	//		}
	//	}
	//	printf("%d\n", max - min);

	//	return 0;
	//}

	//输入一个整数序列，判断是否是有序序列，有序，指序列中的整数从小到大排序或者从大到小排序
	//int main()
	//{
	//	int i, j, n, flag1 = 0, flag2 = 0;//flag一定要赋值
	//	scanf("%d\n", &n);
	//	int arr[n];
	//	for (i = 0; i < n; i++)
	//	{
	//		scanf("%d", &arr[i]);
	//	}
	//	for (i = 0; i < n - 1; i++)//n-1. 不然会越界
	//	{
	//		if (arr[i] > arr[i + 1])
	//			flag1 = 1;
	//		else
	//			flag2 = 1;
	//	}
	//	if (flag1 && flag2)
	//	{
	//		printf("unsorted");
	//	}
	//	else
	//	{
	//		printf("sorted");
	//	}

		//删除指定序列
		//int main()
		//{
		//	int n, t;
		//	scanf("%d\n", &n);
		//	int arr[n];
		//	int i;
		//	for (i = 0; i < n; i++)
		//	{
		//		scanf("%d", &arr[i]);
		//	}
		//	scanf("%d\n", &t);
		//	for (i = 0; i < n; i++)
		//	{
		//		if (arr[i] == t)
		//		{
		//			arr[i] = 0;
		//		}
		//	}
		//	for (i = 0; i < n; i++)
		//	{
		//		if (arr[i] != 0)
		//		{
		//			printf("%d ", arr[i]);
		//		}
		//	}
		//	return 0;
		//}


		//序列去重
		//void Qu_chong(int arr[], int n)
		//{
		//	int i, j;
		//	for (i = 0; i < n; i++)
		//	{
		//		for (j = i + 1; j < n; j++)
		//		{
		//			if (arr[j] == arr[i])
		//			{
		//				arr[j] == 0;
		//			}
		//		}
		//	}
		//	for (i = 0; i < n; i++)
		//	{
		//		if (arr[j] != 0)
		//		{
		//			printf("%d ", arr[i]);
		//		}
		//	}
		//}
		//int main()
		//{
		//	int n;
		//	scanf("%d\n", &n);
		//	int i;
		//	int arr[n];
		//	for (i = 0; i < n; i++)
		//	{
		//		scanf("%d", &arr[i]);
		//	}
		//	for (i = 0; i < n; i++)
		//	{
		//		int j;
		//		for (j = i + 1; j < n; j++)
		//		{
		//			if (arr[j] == arr[i])
		//			{
		//				arr[j] = 0;
		//			}
		//		}
		//	}
		//	for (i = 0; i < n; i++)
		//	{
		//		if (arr[i] != 0)
		//		{
		//			printf("%d ", arr[i]);
		//		}
		//	}
		//	return 0;
		//}