#include "lists.h"

/**
 * sum_listint - calculated the sum of all the datain a listint_t list
 * @head: the first node in the linked list
 * Return: resulting sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
