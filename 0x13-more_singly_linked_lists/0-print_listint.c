#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of a list.
 * @h: linked list to print.
 * Return:  the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t bum = 0;

	while (h)
	{
		printf("%d\n", h->n);
		bum++;
		h = h->next;
	}
	return (bum);
}
