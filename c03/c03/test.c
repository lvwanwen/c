#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//������A�е����ݺ�����B�е����ݽ��н�����������һ���� 
/*int main()
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int b[10] = { 12, 23, 34, 45, 56, 67, 78, 89, 90, 86 };
	int tmp;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		tmp= a[i];
		a[i] = b[i]; 
		b[i] = tmp;
	}
	printf("a���飺");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	putchar('\n');
	printf("b���飺");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", b[i]);
	}
	putchar('\n');
	return 0;
}*/
//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ
/*int main()
{
	double tmp = 1;
	double sum = 0;
	int flag = 1;
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		tmp = flag*1.0 / i;
		sum += tmp;
		flag *= -1;
	}
	printf("%lf\n", sum);
	return 0;
}*/
// ��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			count++;
		}
		if (i / 10 == 9)
		{
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}