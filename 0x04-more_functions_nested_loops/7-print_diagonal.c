#include "main.h"

/**
 * print_diagonals - print diagonals n times
 * @n : parameter no of \
 * void : no value is retured
 */

void print_diagonal(int n)
{
	int i , j;

	if(n > 0)
	{
		for(i = 0; i < n; i++)
		{
			for(j = 0; j <= i; j++)
			{
				putchar(' ');
				if(i == j)
					putchar('\\');
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
