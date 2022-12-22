#include "main.h"

/**
 * *_strncat - concateinate two strings
 * @dest : the string to appended on
 * @src : the string to be appended
 * @n: number of bytes of str to concatenate
 *
 * Return : pointer of the concatinated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
