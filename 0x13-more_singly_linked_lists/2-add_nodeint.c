#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginnig of the linked list
 * @head: poiter to the first node in the list
 * @n; data that is inserted in the new node that is added
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newelement;

	newelement = malloc(sizeof(listint_t));
	if (!newelement)
		return (NULL);

	newelement->n = n;
	newelement->next = *head;
	*head = newelement;

	return (newelement);
}
