#include "main.h"

/**
 * _strlen - return length of string
 * @s : a string the it's value to be returned
 * void : return no value
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
