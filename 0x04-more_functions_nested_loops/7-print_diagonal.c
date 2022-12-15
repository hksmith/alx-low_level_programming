#include "main.h"

/**
 * print_diagonal - print diagonals n times
 * @n : parameter no of \
 * void : no value is retured
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				_putchar(' ');
				if (i == j)
					_putchar('\\');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
