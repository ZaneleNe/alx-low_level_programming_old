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
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: head structure
 * @str: value for node
 *
 * Return: total number of nodes in a list.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (!*head)
	{
		*head = malloc(sizeof(list_t));

		if (!*head)
			return (NULL);

		(*head)->str = strdup(str);
		(*head)->len = get_Name_Len(str);
		(*head)->next = NULL;
	}
	else
	{
		temp = malloc(sizeof(list_t));

		if (!temp)
			return (NULL);

		temp->str = strdup(str);
		temp->next = (*head);
		temp->len = get_Name_Len(str);
		(*head) = temp;
	}
	return (*head);
}
