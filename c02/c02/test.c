#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�����������ͱ�����ֵ��������ֵ�����ݽ��н���
/*int main()
{
	int a = 30;
	int b = 40;
	int tmp = 0;
	a=a^b;
	b=a^b;
	a=a^b;
#if 0
	a=a+b;
	b=a-b;
	a=a-b;
	tmp = a;
	a = b;
	b = tmp;
#endif
	printf("a=%d,b=%d\n", a, b);
	return 0;
}*/
//��10�����������ֵ
/*int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 9, 12, 34, 53, 6 };
	int max = arr[0];
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		if (arr[i]>max)
		{
			max = arr[i];
		}
	}
	printf("max=%d\n", max);
	return 0;
}*/
//��10�������дδ�ֵ
/*int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 9, 12, 34, 53, 6 };
	int max = arr[0];
	int sec = arr[0];
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		if (arr[i]>max)
		{
			sec = max;
			max= arr[i];
		}
		else if (arr[i] > sec)
		{
			sec = arr[i];
		}
	}
	printf("sec=%d\n", sec);
	return 0;
}*/
//���������Ӵ�С���
/*int main()
{
	int a = 12;
	int b = 25;
	int c = 90;
	int tmp;
	if (a < b)
	{
		tmp=a;a=b;b=tmp;
	}
	if(a<c)
	{
		tmp=a;a=c;c=tmp;
	}
	if(b<c)
	{
		tmp=b;b=c;c=tmp;
	}
	printf("%d,%d,%d\n",a,b,c);
#if 0
	if (a > b)
	{
		if (b > c)
		{
			printf("a=%d,b=%d,c=%d\n", a, b, c);
		}
		else if (a > c)
		{
			printf("a=%d,c=%d,b=%d\n", a, c, b);
		}
		else
		{
			printf("c=%d,a=%d,b=%d\n", c, a, b);
		}
	}
	if (b > a)
	{
		if (a > c)
		{
			printf("b=%d,a=%d,c=%d\n", b, a, c);
		}
		else if (b > c)
		{
			printf("b=%d,c=%d,a=%d\n", b, c, a);
		}
		else
		{
			printf("c=%d,b=%d,a=%d\n", c, b, a);
		}
	}
#endif
	return 0;
}*/
//�������������Լ��
int main()
{
	int a = 24;
	int b = 36;
	int smaller = a < b ? a : b;
	int i = 0;
	int max;
	for (i = 1; i <= smaller; i++)
	{
		if (a%i == 0 && b%i == 0)
		{
			max = i;
		}
	}
	if (max == 1)
	{
		printf("��������\n");
		return 0;
	}
	printf("%d��%d�����Լ��Ϊ%d\n", a, b, max);
	return 0;
}

