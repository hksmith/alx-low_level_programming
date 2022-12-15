#include "main.h"

/**
 * print_triangle - print squre n times
 * @size : parameter no of #
 * void : no value is retured
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= size; i++)
		{
			for (j = 0; j <= size; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= 1; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
