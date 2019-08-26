#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//在屏幕上输出*组成的菱形
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
//求出0～999之间的所有“水仙花数”并输出。“水仙花数”是指其各位数字的立方和正好等于该数本身，如；153＝1^3＋5^3＋3^3 
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
//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字
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