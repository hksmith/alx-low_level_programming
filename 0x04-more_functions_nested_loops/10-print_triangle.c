#include "main.h"

/**
 * print_squre - print squre n times
 * @size : parameter no of #
 * void : no value is retured
 */

void print_diagonal(int size)
{
	int i , j;

	if(size > 0)
	{
		for(i = 0; i <= size; i++)
		{
			for(j = 0; j <= size; j++)
			{
				if(j > size - i)
					putchar('#');
				else
					putchar(' ');
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
