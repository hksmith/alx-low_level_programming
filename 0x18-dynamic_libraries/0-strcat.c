#include "main.h"

/**
 * *_strcat - concateinate two strings
 * @dest : the string to appended on
 * @src : the string to be appended
 * Return : pointer of the concatinated string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
