#include <stdio.h>
#include <stdlib.h>
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
	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
