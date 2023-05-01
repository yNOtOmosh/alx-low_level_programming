#include "lists.h"
/**
 * get_nodeint_at_index - returns the node at certain index in a linked list
 * @head: the first node in the linked list
 * @index: is the index of the node to return
 * Return: if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int p = 0;
	listint_t *temp = head;

	while (temp && p < index)
	{
		temp = temp->next;
		p++;
	}
	return (temp ? temp : NULL);
}
