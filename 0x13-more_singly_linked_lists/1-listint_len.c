#include "lists.h"

/**
 * listint_len - returns the number of elements in the linked list, listint_t.
 * @h: the linked to print
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t bum = 0;

	while (h)
	{
		bum++;
		h = h->next;
	}
	return (bum);
}
