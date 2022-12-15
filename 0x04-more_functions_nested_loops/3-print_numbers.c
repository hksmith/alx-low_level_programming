#include "main.h"

/**
 * print_numbers - print no 0-9
 * it takes no parameters
 * Void : no return types
 */

void print_numbers(void)
{
	int i;

	for(i = 0; i < 10; i++)
		putchar(i + '0');

	putchar('\n');
}
