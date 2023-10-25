#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t flen = 0;
	int ciff;
	listint_t *ssemp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		ciff = *h - (*h)->next;
		if (ciff > 0)
		{
			ssemp = (*h)->next;
			free(*h);
			*h = ssemp;
			flen++;
		}
		else
		{
			free(*h);
			*h = NULL;
			flen++;
			break;
		}
	}

	*h = NULL;

	return (flen);
}
