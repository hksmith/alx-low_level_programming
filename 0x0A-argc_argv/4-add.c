#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main - prints multiple of two numbers
 * @argc: a variable that holds the no of the comand used to run the program
 * @argv: a array that holds the strigs in argc
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i, j, len, sum;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];
			len = strlen(ptr);

			for (j = 0; j < len; j++)
			{
				if (isdigit(*(ptr + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
