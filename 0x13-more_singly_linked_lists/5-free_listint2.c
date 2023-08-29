#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list.
 * @head: reference to head pointer
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head, *next;

	if (!head)
		return;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}
