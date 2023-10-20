#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list_t list.
 *
 * Return: The number of nodes in usually.
 */

size_t print_list(const list_t *j)
{
	size_t adds = 0;

	while (j)
	{
		if (j->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", j->len, j->str);
		}
		adds++;
		j = j->next;
	}

	return (adds);
}
