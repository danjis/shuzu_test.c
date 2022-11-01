//题目
//1. 利用一维数组存放 Fibonacci 数列的前 20 个数并实现输出。Fibonacci 数列的特点是：第一和第二个数都是 1，
//从第三个数开始每个数是前面两个数之和，即 1，1，2，3，5，8，13，…。
//2. 已知一个已按升序排列的整型数组，从键盘输入任意一个整数，要求按原来排序规则将其插入到数组的相应位置上。
//3. 将自然数 1 至 36 按行顺序存入 6×6 的二维数组中，输出该数组左上半三角。
//4. 将键盘输入的任意 30 个整型数（可以用随机数产生），依次存放到已定义的 5×6 整型二维数组中，
//并从该二维数组的每一列中选出本列的最小数，再从已选出的这6个数中选出最大数，打印该最大数和它所在的行号和列号。
//#define _CRT_SECURE_NO_WARNINGS 1
//#define ROW 6
//#define COL 6
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//int main()
//{
//	int arr[20] = { 1,1 }, i;
//	for (i = 2; i < 20; i++)
//	{
//		arr[i] = arr[i - 1] + arr[i - 2];
//	}
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ,", arr[i]);
//	}
//	return 0;
//}
//作业2
//int main()
//{
//	int input, i, n;
//	int arr[11] = { 1,3,5,15,20,27,30,36,41,50 };
//	printf("请输入\n");
//	scanf("%d", &input);
//	for (i = 0; i < 10; i++)
//	{
//		if (input < arr[i])
//		{
//			break;
//		}
//	}
//	if (i == 10)
//		arr[10] = input;
//	else
//	{
//		for (n = 10; n > i; n--)
//		{
//			arr[n] = arr[n - 1];
//		}
//		arr[i] = input;
//	}
//	for (i = 0; i <= 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//作业3
//int main()
//{
//	int i, j,arr[ROW][COL]={0},k=0;
//	for (i = 0; i < 6; i++)
//	{
//		for (j = 0; j < 6; j++)
//		{
//			k += 1;
//			arr[i][j] = k;
//		}
//	}
//	for (i = 0; i < 6; i++)
//	{
//		for (j = 0; j < 6; j++)
//		{
//			printf("%2d ", arr[i][j]);
//			if (i + j == 5)
//				break;
//		}
//		printf("\n");
//	}
//	return 0;
//}
//作业4
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int arr[5][6] = { 0 },ret,i,j,min,max=0,k,r,c;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 6; j++)
//		{
//			arr[i][j] = rand();
//			printf("%8d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	for (i = 0; i < 5; i++)
//	{
//		j = 0;
//		min = arr[i][j];
//		for (j = 0; j < 6; j++)
//		{
//			if (min > arr[i][j])
//			{
//				min = arr[i][j];
//				k = j;
//			}
//		}
//		printf("第%d列中的最小数%d,所在位置第%d列第%d行\n",i+1,min,i+1,k+1);
//		for (j = 0; j < 6; j++)
//		{
//			if (max < min)
//			{
//				r = i + 1;
//				c = k + 1;
//				max = min;
//			}
//		}
//	}
//	printf("各列最小数中的最大数%5d,所在位置第%d列第%d行", max,r,c);
//	return 0;
//}