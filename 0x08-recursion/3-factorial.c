#include "main.h"

/**
 * factorial - returns factorial of a given no
 * @n: the number which the factorial function gone do
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
