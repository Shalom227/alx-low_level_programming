#include <stdio.h>
#include "lists.h"

/**
 *print_list - prints all elements of a linked list
 * @h: pointer to the list_t that is ti be printed
 * Return: number of nodes printed
 * Description: singly linked list node structure
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
	if (!h->str)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	i++;
	}
	return (i);
}