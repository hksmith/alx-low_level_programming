#include "main.h"

/**
 * * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenat
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	
	while (src[j] != '\0' && i < n)
		{
			dest[i] = src[i];
			i++;
		}

		while (i  < n)

		{
			dest[i] = '\0';
			i++;
		}

		return (dest);
}
