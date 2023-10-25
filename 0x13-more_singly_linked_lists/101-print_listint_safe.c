#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _r - reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @list: the old list to append
 * @size: size of the new list (always one more than the old list)
 * @new: new node to add to the list
 *
 * Return: pointer to the new list
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tort, *share;
	size_t rudes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tort = head->next;
	share = (head->next)->next;

	while (share)
	{
		if (tort == share)
		{
			tort = head;
			while (tort != share)
			{
				rudes++;
				tort = tort->next;
				share = share->next;
			}

			tort = tort->next;
			while (tort != share)
			{
				rudes++;
				tort = tort->next;
			}

			return (rudes);
		}

		tort = tort->next;
		share = (share->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t rudes, index = 0;

	rudes = looped_listint_len(head);

	if (rudes == 0)
	{
		for (; head != NULL; rudes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < rudes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (rudes);
}
