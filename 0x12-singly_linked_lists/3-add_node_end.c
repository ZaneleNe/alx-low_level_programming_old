#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * get_Name_Len - gets the length of a name
 * @str: name to be counted
 *
 * Return: total characters.
 */
int get_Name_Len(const char *str)
{
	int len = 0;

	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head structure
 * @str: value for node
 *
 * Return: total number of nodes in a list.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last;

	last = *head;
	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = get_Name_Len(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;

	return (last);
}
