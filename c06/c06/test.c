#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��������9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
/*void Mul_Table(int n)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf(" %d*%d=%d", j,i,i*j);
		}
		printf("\n");
	}
}
int main()
{
	Mul_Table(12);
	return 0;
}*/
//ʹ�ú���ʵ���������Ľ�����
/*void swapArgs(int*pa, int*pb)
{
	int tmp;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
int main()
{
	int a = 4, b = 5;
	swapArgs(&a, &b);
	printf("a=%d,b=%d\n", a, b);
	return 0;
}*/
//ʵ��һ�������ж�year�ǲ������ꡣ 
/*int LeapYear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		return 1;
	}
	return 0;
}
int main()
{
	if (LeapYear(2001) == 1)
	{
		printf("is leap year\n");
	}
	else
	{
		printf("is common year\n");
	}
	return 0;
}*/
//����һ�����飬 ʵ�ֺ���init������ʼ�����顢ʵ��empty����������顢ʵ��reverse���������������Ԫ�ص����á�Ҫ���Լ���ƺ����Ĳ���������ֵ��
/*void init(int *dst, int *src, int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		dst[i] = src[i];
	}
}
void empty(int *dst, int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		dst[i]= 0;
	}
}
void reverse(int *dst, int len)
{
	int left = 0;
	int right = len - 1;
	int tmp;
	while (left<=right)
	{
		tmp = dst[left];
		dst[left] = dst[right];
		dst[right] = tmp;
		left++;
		right--;
	}
}
void print(int *dst, int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		printf("%d", dst[i]);
	}
	printf("\n");
}
int main()
{
	int src[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int len = sizeof(src) / sizeof(src[0]);
	int dst[10];
	init(dst, src, len);
	print(dst, len);
	reverse(dst, len);
	print(dst, len);
	empty(dst, len);
	print(dst, len);
	return 0;
}*/
//ʵ��һ���������ж�һ�����ǲ���������
#include<math.h>
int Prime(int num)
{
	int i = 0;
	int tmp = sqrt(num);
	for (i = 2; i <= tmp; i++)
	{
		if (num%i == 0)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	if (Prime(17) == 1)
	{
		printf("is prime\n");
	}
	else
	{
		printf("is not prime\n");
	}
	return 0;
}