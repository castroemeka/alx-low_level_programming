#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nott;

	if (head == NULL)
		return (NULL);
	nott = malloc(sizeof(listint_t));
	if (nott == NULL)
		return (NULL);
	nott->n = n;
	nott->next = *head;
	*head = nott;
	return (nott);
}
