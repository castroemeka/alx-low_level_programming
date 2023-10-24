#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int ccum = 0;
	listint_t *ssemp = head;

	while (ssemp)
	{
		ccum += ssemp->n;
		ssemp = ssemp->next;
	}

	return (ccum);
}
