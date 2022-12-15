#include "main.h"

/**
 * print_most_number - print no with out 2 and 4
 * void : accept no parameter
 * void : return no value
 */
void print_most_numbers(void)
{
	int i;

	for(i = '0'; i <= '9'; i++)
	{
		if(i == '2' || i== '4')
			continue;
		putchar(i);
	}
}

