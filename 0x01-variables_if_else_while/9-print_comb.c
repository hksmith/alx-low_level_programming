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
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num != 9)
		{
			putchar(",");
			putchar(" ");
		}
	}
	putchar('\n');

	return (0);
}
