#include "lists.h"

/**
 * pop_listint - deletes the head node of the listint_t linked list
 * @head: pointer to the first element in the linked list
 * Return: the head node’s data (n) or 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int bum;

	if (!head || !*head)
		return (0);

	bum = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (bum);
}
