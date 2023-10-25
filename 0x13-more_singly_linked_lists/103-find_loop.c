#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *flow = head;
	listint_t *last = head;

	if (!head)
		return (NULL);

	while (flow && last && last->next)
	{
		last = last->next->next;
		flow = flow->next;
		if (last == flow)
		{
			flow = head;
			while (flow !=last)
			{
				flow = flow->next;
				last = last->next;
			}
			return (last);
		}
	}

	return (NULL);
}
