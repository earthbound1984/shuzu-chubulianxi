

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main()
{
	//以下是冒泡排序法
	printf("以下是冒泡排序法：\n");
	int a, b,c[SIZE],i,d,e,m,n,f,g,h;
	float j;
	for (i = 0; i < 10; i++)
	{
		c[i]= rand() % 100 + 1;
	}
	for (a = 0; a < SIZE - 1; a++)
	{
		for (b = 0; b < SIZE - 1 - a; b++)
		{
			if (c[b] > c[b + 1])
			{
				d = c[b];
				c[b] = c[b+1];
				c[b + 1] = d;
			}
		}
	}
	for (e = 0; e < SIZE; e++)
	{
		printf("%4d", c[e]);
	}
	printf("\n");
	//以下是选择排序法
	printf("以下是选择排序法：\n");
	for (h = 0; h < 10; h++)
	{
		c[h] = rand() % 100 + 1;
	}
	for (m = 0; m < SIZE - 1; m++)
	{
		for (n = 0; n < SIZE - 1 - m; n++)
		{
			if (c[m] > c[m + n + 1])
			{
				f = c[m];
				c[m] = c[m +n+ 1];
				c[m +n+ 1] = f;
			}
		}
	}
	for (g = 0; g < SIZE; g++)
	{
		printf("%4d", c[g]);
	}
	printf("\n");
	//输出所有的奇数
	printf("输出所有的奇数：\n");
	for (e = 0; e < SIZE; e++)
	{
		if (c[e] % 2 != 0)
			printf("%4d", c[e]);
	}
	printf("\n");
	//输出所有比平均值大的偶数
	printf("输出所有比平均值大的偶数：\n");
	h = 0;
	for (i = 0; i < SIZE; i++)
	{
		h = h + c[i];
	}
	j = (float)h / SIZE;
	for (i = 0; i < SIZE; i++)
	{
		if (j < c[i])
			printf("%4d", c[i]);
	}
	printf("\n");
}

