#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: a variable that holds the no of the comand used to run the program
 * @argv: a array that holds the strigs in argc
 *
 * Return: always 0
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
