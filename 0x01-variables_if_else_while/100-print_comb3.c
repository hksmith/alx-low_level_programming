#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Prints the alphabet in lowercase.
*
* Return: Always 0.
*/

int main(void)
{
	int num, num2, n = '1';

	for (num = '0'; num <= '9'; num++)
	{
		for (num2 = n; num2 <= '9'; num2++)
		{
			putchar(num);
			putchar(num2);
			if (num != '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
		n += 1;
	}

	putchar('\n');

	return (0);
}
