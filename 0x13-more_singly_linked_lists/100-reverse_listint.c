#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ken = NULL;
	listint_t *yen = NULL;

	while (*head)
	{
		yen = (*head)->next;
		(*head)->next = ken;
		ken = *head;
		*head = yen;
	}

	*head = ken;

	return (*head);
}
