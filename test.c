//��Ŀ
//1. ����һά������ Fibonacci ���е�ǰ 20 ������ʵ�������Fibonacci ���е��ص��ǣ���һ�͵ڶ��������� 1��
//�ӵ���������ʼÿ������ǰ��������֮�ͣ��� 1��1��2��3��5��8��13������
//2. ��֪һ���Ѱ��������е��������飬�Ӽ�����������һ��������Ҫ��ԭ�������������뵽�������Ӧλ���ϡ�
//3. ����Ȼ�� 1 �� 36 ����˳����� 6��6 �Ķ�ά�����У�������������ϰ����ǡ�
//4. ��������������� 30 ��������������������������������δ�ŵ��Ѷ���� 5��6 ���Ͷ�ά�����У�
//���Ӹö�ά�����ÿһ����ѡ�����е���С�����ٴ���ѡ������6������ѡ�����������ӡ��������������ڵ��кź��кš�
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
//��ҵ2
//int main()
//{
//	int input, i, n;
//	int arr[11] = { 1,3,5,15,20,27,30,36,41,50 };
//	printf("������\n");
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
//��ҵ3
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
//��ҵ4
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
//		printf("��%d���е���С��%d,����λ�õ�%d�е�%d��\n",i+1,min,i+1,k+1);
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
//	printf("������С���е������%5d,����λ�õ�%d�е�%d��", max,r,c);
//	return 0;
//}