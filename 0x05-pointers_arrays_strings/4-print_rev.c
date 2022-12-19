#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s : a string the it's value to be returned
 * Return: the length of the string
 */
void print_rev(char *s)
{
	int i, j;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
