#include "lists.h"

/**
 * print_listint - prints all the members in the list
 * @h: a variable that holds the value to be printed
 *
 * Return: number of the node
 */

size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("%d\n", h->n);
		x++;
		h = h->next;
	}
	return (x);
}
