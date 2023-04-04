#include "lists.h"

/**
 * get_nodeint_at_index - the nth node of a listint_t linked list.
 * @index: the index of the node, starting at 0
 * @head: first node in the linked list
 * Return: pointer tonode that's being searched for. NULL,if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int s = 0;
	listint_t *temp = head;

	while (temp && s < index)
	{
		temp = temp->next;
		s++;
	}
	return (temp ? temp : NULL);
}
