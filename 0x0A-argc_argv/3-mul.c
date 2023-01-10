#include <stdio.h>
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
	printf("%d\n", argv[1] * argv[2]);
	return (0);
}
