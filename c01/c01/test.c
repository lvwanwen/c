#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�ж�һ�����ǲ�������
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
			printf("�Ǻ���\n");
			break;
		}
	}
	if (i == tmp+1)
	{
		printf("������\n");
	}
	return 0;
}*/
//��ӡ100~200 ֮������� 
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
//�ж�1000��---2000��֮������� 
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
//��ӡ5��*��ֱ��������
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
//����˷��ھ��� 
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
//��ӡ5��*����������
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

