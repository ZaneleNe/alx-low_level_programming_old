#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes node at given index
 * @head: reference pointer to the head of the linked list
 * @index: node position of item to be removed
 *
 * Return: 1 on successful
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *next;
	unsigned int i = 0;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	for ( ; temp != NULL && i < index - 1; i++)
		temp = temp->next;

	if (temp == NULL || temp->next == NULL)
		return (-1);

	next = temp->next->next;

	free(temp->next);

	temp->next = next;

	return (1);
}
