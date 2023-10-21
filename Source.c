#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>

#define ROW 9
#define COL 9

void main()
{
	setlocale(LC_ALL, "RUS");
	/*int row, col;
	printf("\n");
	for (row = 1; row <= ROW; ++row)
	{
		for (col = 1; col <= row; col++)
		{
			printf("%5d", col * row);
		}
		printf("\n");
	}
	system("pause");*/
	int x,y;
	puts("¬ведите произвольное число:");
	scanf("%d", &x);
	int k = 0;
	int s = 1;
	while (x != 0)
	{
		y = x % 10;
		if (y == 3)
			k += 1;
		x /= 10;
	}
	while (x != 0)
	{
		y = x % 10;
		if (y != 0)
			s = s * y;
		x /= 10;
	}
	printf("\n%d, %d", k, s);


}

