#include "lists.h"

/**
 * dlistint_len - returns length of dist
 * @h: address of head node
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t j = 0;

	while (h)
	{
		h = h->next;
		j++;
	}
	return (j);
}
