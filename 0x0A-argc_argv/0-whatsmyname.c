#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: a variable that holds the no of the comand used to run the program
 * @argv: a array that holds the strigs in argc
 *
 * Return: always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
