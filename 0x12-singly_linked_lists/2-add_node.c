#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - function that returns the length of a string.
 * @s : s is a character
 * Return: value is u
 */
int _stock(const char *s)
{
	int u = 0;

	while (s[u] != '\0')
	{
		u++;
	}
	return (u);
}

/**
 * add_node - add a new node at beginning of a list_t list.
 * @head: head of a list_t list.
 * @str: value to insert into element.
 * Return: the number of list nodes.
 */
list_t *bed_node(list_t **head, const char *str)
{
	list_t *bed;

	bed = malloc(sizeof(list_t));
	if (bed == NULL)
		return (NULL);
	bed->str = strdup(str);

	bed->len = _stock(str);
	bed->next = *head;
	*head = bed;

	return (bed);
}
