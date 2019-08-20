#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//判断一个数是不是素数
/*#include<math.h>
int main()
{
	int i = 0;
	int n = 97;
	int tmp;
	tmp = sqrt(n);
	for (i = 2; i <=tmp; i++)
	{
		if (n%i == 0)
		{
			printf("是和数\n");
			break;
		}
	}
	if (i == tmp+1)
	{
		printf("是素数\n");
	}
	return 0;
}*/
//打印100~200 之间的素数 
/*#include<math.h>
int main()
{
	int n = 0;
	int tmp = 1;
	int i = 0;
	for (n = 100; n <= 200; n++)
	{
		tmp = sqrt(n);
		for (i = 2; i <= tmp; i++)
		{
			if (n % i == 0)
			{
				break;
			}
		}
		if (i == tmp + 1)
		{
			printf("%d\n", n);
		}
	}
	return 0;
}*/
//判断1000年---2000年之间的闰年 
/*int main()
{
	int i;
	for (i = 1000; i <= 2000; i++)
	{
		if (i % 400 == 0 ||
			(i % 100 != 0 && i % 4 == 0))
		{
			printf("%d\n", i);
		}
	}
	return 0;
}*/
//打印5行*的直角三角形
/*int main()
{
	int n = 5;
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}
	return 0;
}*/
//输出乘法口诀表 
/*int main()
{
	int n = 9;
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("  %d*%d=%d", j, i, i*j);
		}
		printf("\n");
	}
	return 0;
}*/
//打印5行*的正三角形
int main()
{
	int n = 5;
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
		{
			putchar(' ');
		}
		for (j = 1; j <=2*i - 1; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}
	return 0;
}

