#include "main.h"

/**
 * _puts_recursion - prints string using recursion
 * @s: a variable used to print the strings
 * void - returns on value
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_putchar(s + 1);
}
