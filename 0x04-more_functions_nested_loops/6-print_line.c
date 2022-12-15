#include "main.h"

/**
 * print_line - prints straight line
 * @n : accepted value  length of the line
 * void : return no value
 */

void print_line(int n)
{
	int i;

	if(n > 0)
	{
	for(i = 0; i < n; i++)
		putchar('_');
	}
	putchar('\n');
}
