#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��ɲ�������Ϸ��
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
	int randnum = rand() % 100 + 1;//�����������[1,101)֮��
	printf("��ʼ��Ϸ\n");
	while (1)
	{
		int num = 0;
		printf("��������Ҫ�µ����֣�");
		scanf("%d", &num);
		if (num == randnum)
		{
			printf("�¶���\n");
			break;
		}
		else if (num > randnum)
		{
			printf("�´���\n");
		}
		else if (num < randnum)
		{
			printf("��С��\n");
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
		printf("��������Ĳ�����");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ�˳�\n");
			break;
		default:
			printf("������ȷ������\n");
			break;
		}
	} while (input);
	return 0;
}*/
//д����������������������в�����Ҫ�����֣��ҵ��˷����±꣬�Ҳ������� - 1�����۰���ң�
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
//��д����ģ��������������ĳ���������������������룬������ȷ����ʾ����¼�ɹ���, ������󣬿����������룬����������Ρ����ξ�������ʾ�˳�����
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
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == PWDCHECK)
	{
		printf("�˳�\n");
		return 1;
	}
	return 0;
}*/
//��дһ�����򣬿���һֱ���ռ����ַ��� �����Сд�ַ��������Ӧ�Ĵ�д�ַ���������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ�����������ֲ������
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