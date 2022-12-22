#include "main.h"

/**
 * *_strcat - concateinate two strings
 * @dest : the string to appended on
 * @src : the string to be appended
 * Return : pointer of the concatinated string
 */

char *_strcat(char *dest, char *src)
{
	int i, len = 0;

	while (dest[len])
		len++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];

		len++;
	}
	dest[len] = '\0';

	return (dest);
}
