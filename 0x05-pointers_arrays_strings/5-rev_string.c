#include "main.h"

/**
 * rev_string - make string reverse
 * @s : a string to be reversed
 * void : return no value
 */

void rev_string(char *s)
{
	char tmp;
	int i, len, len1;

	len = 0;
	len1 = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len1];
		s[len--] = tmp;
	}
}
