#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to current head node
 * @index: index of node to return
 *
 * Return: if the node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int j = 0;

	while (head)
	{
		if (j == index)
			return (head);
		head = head->next;
		j++;
	}
	return (NULL);
}
