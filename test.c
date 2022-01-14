#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int i, j, n, m;
//	int a[16] = { 0 };
//	printf("input number:\n");
//	scanf("%d", &n);
//	for (m = 0; m < 15; m++)
//	{
//		i = n % 2;
//		j = n / 2;
//		n = j;
//		a[m] = i;
//	}
//	for (m = 15; m >= 0; m--)
//	{
//		printf("%d", a[m]);
//		if (m == 4)
//			printf(" ");
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (i == 0 || i == n - 1)
//				printf("* ");
//			else if (j == 0 || j == n - 1)
//				printf("* ");
//			else
//				printf("  ");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	int tmp = 0;
//	if (a > b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (b > c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	if (a > c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//int main()
//{
//	int day = 9;
//	int x2 = 1;
//	int x1 = 0;
//	while (day > 0)
//	{
//		x1 = (x2 + 1) * 2;
//		x2 = x1;
//		day--;
//	}
//	printf("%d\n", x1);
//	return 0;
//}

//int main()
//{
//	int y = 0;
//	int m = 0;
//	int d = 0;
//	int sum = 0;
//	scanf("%d%d%d", &y, &m, &d);
//	int i = 0;
//	int a[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	int b[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
//	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
//	{
//		for (i = 0; i < m - 1; i++)
//		{
//			sum += b[i];
//		}
//	}
//	else
//		for (i = 0; i < m - 1; i++)
//		{
//			sum += a[i];
//		}
//	sum += d;
//	if ((sum % 5) < 4 && (sum % 5) > 0)
//		printf("打鱼\n");
//	else
//		printf("晒网\n");
//	return 0;
//}

//int main()
//{
//	int g = 0;
//	int m = 0;
//	int c = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (g = 0; g <= 20; g++)
//	{
//		for (m = 0; m <= 33; m++)
//		{
//			for (c = 3; c <= 99; c++)
//			{
//				if (5 * g + 3 * m + c / 3 == 100)
//				{
//					if (g + m + c == 100)
//					{
//						if (c % 3 == 0)
//						{
//							printf("%d %d %d ", g, m, c);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	float h = 100;
//	float s = 100;
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		h /= 2;
//		s += h * 2;
//	}
//	printf("总长为：%f\n", s);
//	printf("第十次谈起高度：%f\n", h / 2);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (n = 100; n < 1000; n++)
//	{
//		i = n % 10;
//		j = n / 10 % 10;
//		k = n / 100;
//		if (i * i * i + j * j * j + k * k * k == n)
//			printf("%d ", n);
//	}
//	return 0;
//}

int main()
{
	float x = 0;
	float m, m1, m2;
	char y, z;
	scanf("%f,%c,%c", &x, &y, &z);
	switch (y)
	{
	case'a':
		m1 = 5.75; 
		break;
	case'b':
		m1 = 6.00;
		break;
	case'c':
		m1 = 7.15;
		break;
	}
	switch(z)
	{
	case'm':
		m2 = 0.05;
		break;
	case'e':
		m2 = 0.10;
		break;
	}
	m = x * m1 - x * m1 * m2;
	printf("%.3f\n", m);
		return 0;
}