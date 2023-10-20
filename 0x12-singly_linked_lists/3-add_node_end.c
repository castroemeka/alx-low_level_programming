#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - finds the length of a string
 * @str: string to find the length of
 *
 * Return: length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * add_node_end - adds a new node to the end of linked list
 * @head: double pointer to a linked list
 * @str: string to add to the new node
 *
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ark, *con;

	if (str == NULL)
		return (NULL);
	ark = malloc(sizeof(list_t));
	if (ark == NULL)
		return (NULL);
	ark->str = strdup(str);
	if (ark->str == NULL)
	{
		free(ark);
		return (NULL);
	}
	ark->len = _strlen(ark->str);
	ark->next = NULL;
	if (*head == NULL)
	{
		*head = ark;
		return (ark);
	}
	con = *head;
	while (con->next)
		con = con->next;
	con->next = ark;
	return (ark);
}
