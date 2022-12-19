#include "main.h"

/**
 * swap_int - it swaps to two int values
 * @a : a value to be swaped with b
 * @b : a value to be swaped with a
 * void : return no value
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
