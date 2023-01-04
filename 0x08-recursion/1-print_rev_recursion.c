#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse with recursion
 * @s: the variabel to be printed
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
