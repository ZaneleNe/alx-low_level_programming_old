#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees entire linked list.
 * @head: head structure containing entire list.
 *
 * Return: total number of nodes in a list.
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
