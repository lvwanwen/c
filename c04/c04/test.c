#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����Ļ�����*��ɵ�����
/*int main()
{
	int n = 7;
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
		{
			putchar(' ');
		}
		for (j = 1; j <= 2 * i - 1; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}
	for (i = n-1; i >0; i--)
	{
		for (j = 1; j <= n-i; j++)
		{
			putchar(' ');
		}
		for (j = 1; j <= 2 * i - 1; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}
	return 0;
}*/
//���0��999֮������С�ˮ�ɻ��������������ˮ�ɻ�������ָ���λ���ֵ����������õ��ڸ��������磻153��1^3��5^3��3^3 
/*#include<math.h>
int main()
{
	int i = 0;
	int j = 0;
	int sum = 0;
	int m = 1;
	int flag = 10;
	for (i = 0; i <=999; i++)
	{
		if (flag == i)
		{
			m++;
			flag *= 10;
		}
		for (j = i; j; j /= 10)
		{
			sum += pow(j % 10, m);
		}
		if (sum == i)
		{
			printf("%d\n", sum);
		}
		sum = 0;
	}
	return 0;
}*/
//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ������
int main()
{
	int a = 2, n = 5;
	int i = 0;
	int sum = 0;
	int tmp = 0;
	for (i = 1; i <= n ; i++)
	{
		tmp = tmp * 10 + a;
		sum += tmp;
	}
	printf("%d\n", sum);
	return 0;
}