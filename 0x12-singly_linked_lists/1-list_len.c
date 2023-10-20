#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - to return the number of elements in the linked list.
 * @e: name of the list
 * Return: the number of node lists.
 */

size_t list_len(const list_t *j)
{
	int adds = 0;

	while (j)
	{
		adds++;
		j = j->next;
	}
	return (adds);
}
