#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
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
//使用函数实现两个数的交换。
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
//实现一个函数判断year是不是润年。 
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
//创建一个数组， 实现函数init（）初始化数组、实现empty（）清空数组、实现reverse（）函数完成数组元素的逆置。要求：自己设计函数的参数，返回值。
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
//实现一个函数，判断一个数是不是素数。
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