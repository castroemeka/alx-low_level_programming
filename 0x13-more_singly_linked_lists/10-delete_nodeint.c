#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ssemp = *head;
	listint_t *volt = NULL;
	unsigned int p = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(ssemp);
		return (1);
	}

	while (p < index - 1)
	{
		if (!ssemp || !(ssemp->next))
			return (-1);
		ssemp = ssemp->next;
		p++;
	}


	volt = ssemp->next;
	ssemp->next = volt->next;
	free(volt);

	return (1);
}
