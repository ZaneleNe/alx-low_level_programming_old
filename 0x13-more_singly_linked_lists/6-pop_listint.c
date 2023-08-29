#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - removes the head node
 * @head: reference to head pointer of linked list
 *
 * Return: head nodes data
 */
int pop_listint(listint_t **head)
{
	int node_data;
	listint_t *temp = *head;

	if (!*head)
		return (0);

	node_data = (*head)->n;
	*head = temp->next;

	free(temp);

	return (node_data);
}
