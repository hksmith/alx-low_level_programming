#include <stdio.h>

/**
 * main Entry point
 *
 * Return 1 Success(1)
 */

int write(int filedes, const char *buf, unsigned int nbyte);
int main(int argc, char **argv)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}
