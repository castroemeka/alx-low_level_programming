#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return:  void.
 */

void free_list(list_t *head)
{
	list_t *carry;

	while ((carry = head) != NULL)
	{
		head = head->next;
		free(carry->str);
		free(carry);
	}
}
