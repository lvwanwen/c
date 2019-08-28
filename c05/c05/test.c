#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//完成猜数字游戏。
/*#include<stdlib.h>
#include<time.h>
void Menu()
{
	printf("*************************\n");
	printf("*******1.play************\n");
	printf("*******0.exit************\n");
	printf("*************************\n");
}
void game()
{
	int randnum = rand() % 100 + 1;//设置随机数在[1,101)之间
	printf("开始游戏\n");
	while (1)
	{
		int num = 0;
		printf("请输入你要猜的数字：");
		scanf("%d", &num);
		if (num == randnum)
		{
			printf("猜对了\n");
			break;
		}
		else if (num > randnum)
		{
			printf("猜大了\n");
		}
		else if (num < randnum)
		{
			printf("猜小了\n");
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		Menu();
		printf("请输入你的操作：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏退出\n");
			break;
		default:
			printf("输入正确的数字\n");
			break;
		}
	} while (input);
	return 0;
}*/
//写代码可以在整型有序数组中查找想要的数字，找到了返回下标，找不到返回 - 1。（折半查找）
/*int Find_Num(int arr[ ], int len, int key)
{
	int left = 0;
	int right = len - 1;
	int mid;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (key > arr[mid])
		{
			left = mid + 1;
		}
		else if (key<arr[mid])
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[5] = { 12, 23, 34, 45, 56 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int key = 34;
	printf("%d\n", Find_Num(arr, len, key));
	return 0;
}*/
//编写代码模拟三次密码输入的场景。最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，可以重新输入，最多输入三次。三次均错，则提示退出程序。
/*#include<string.h>
#define PWDCHECK 3
int Password(char* src)
{
		if (strcmp(src, "abcdef")==0)
		{
			return 1;
		}
	return 0;
}
int main()
{
	int i;
	char str[64] = { 0 };
	for (i = 0; i < PWDCHECK; i++)
	{
		scanf("%s", str);
		if (Password(str) == 1)
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (i == PWDCHECK)
	{
		printf("退出\n");
		return 1;
	}
	return 0;
}*/
//编写一个程序，可以一直接收键盘字符， 如果是小写字符就输出对应的大写字符，如果接收的是大写字符，就输出对应的小写字符，如果是数字不输出。
void receive()
{
	char ch;
	while (1)
	{
		ch = getchar();
		if (ch >= 'A'&&ch <= 'Z')
		{
			ch += 'a' - 'A';
		}
		else if (ch >= 'a'&&ch <= 'z')
		{
			ch -= 'a' - 'A';
		}
		else if (ch >= 0 && ch <= 9)
		{
			continue;
		}
		putchar(ch);
	}
}
int main()
{
	receive();
	return 0;
}