#include "main.h"
#include <stdio.h>

/**
 * main - print no 1 to 100 with replacing some with fizz buzz
 * void : return no value
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("%s", "FizzBuzz");
		else if (i % 3 == 0)
			printf("%s", "Fizz");
		else if (i % 5 == 0)
			printf("%s", "Buzz");
		else
			printf("%d", i);
		printf(" ");
	}
	printf("\n");

	return (0);
}
