/*
 * File: 101-quote.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Prints "and that piece of art is useful" - Dora Korpar, 2015-10-19",
 *                followed by a new line, to standard error.
 * Return: Always 1.
 */

int write(int filedes, const char *buf, unsigned int nbyte);
int main(int argc, char **argv)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}
