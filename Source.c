#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>

#define ROW 5
#define COL 5

void main()
{
	setlocale(LC_ALL, "RUS");
	/*int row, col;
	int a, b;
	a = 30;
	b = 1;
	printf("\n");
	for (row = 1; row <= ROW; ++row)
	{
		a = a - b;
		++b;
		for (col = 1; col <= row; col++)
		{
			printf("%5d", ++a);

		}

		printf("\n");
	}
	system("pause");*/
	/*int x, y;
	while (1)

	{
		printf("\n������� ������������ �����:");
		scanf("%d", &x);
		int k = 0;
		int s = 0;
		char a;
		while (x != 0)
		{
			y = x % 10;
			if (y == 3)
				k += 1;
			if (y > 5)
				++s;
			x /= 10;
		}
		printf("\n���������� ���� \"3\" - %d\n���������� ���� ������ 5 - %d", k, s);
		printf("\n���������� ? (�� - y, ��� - n)");
		if ((a = getchar()) == 'n')
			break;
	}*/
	int a, h, k;
	char c,d;
	printf("������� ������ ��� ������, ����� �������� ���������, ������ �������� (����� �������): ");
	scanf("%c,%d,%d", &c, &a, &h);
	k = 1;
	printf("\n");
	for (int i = 1; i <= h; ++i)
	{
		for (int j = 1; j <= a + ((h - 1) * 2); ++j)
		{
			if (j <= h - k || j > (a + ((h - 1) * 2)) - (h - k))
				printf(" ");
			else
				printf("%c", c);
		}
		++k;
		printf("\n");
	}
	while (1)
	{
		printf("\n������� �������� ������? (�� - y, ��� - n)");
		scanf("%c", &d);
		scanf("%c", &d);
		if (d  == 'n')
			break;
		else
			printf("\n������� ����� �������� ���������, ������ �������� (����� �������): ");
			scanf("%d,%d", &a, &h);
			k = 1;
			printf("\n");
			for (int i = 1; i <= h; ++i)
			{
				for (int j = 1; j <= a + ((h - 1) * 2); ++j)
				{
					if (j <= h - k || j > (a + ((h - 1) * 2)) - (h - k))
						printf(" ");
					else
						printf("%c", c);
				}
				++k;
				printf("\n");
			}	
	}
	
}