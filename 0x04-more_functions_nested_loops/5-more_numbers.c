#include "main.h"

/**
 * more_numbers - print no 1 - 14 10 times
 * void - accepte no paramter
 * void : return no value
 */

void more_numbers(void)
{
	int i, j;
	for(i = 0; i <= 9; i++)
	{
		for(j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
