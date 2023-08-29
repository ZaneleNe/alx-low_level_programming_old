#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns a node at nth position
 * @head: reference to head node
 * @index: position of node to be returned
 *
 * Return: Node at @index
 *         Otherwise returns NULL if index position not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (head)
	{
		if (index == i)
			return (head);
		head = head->next;
		i++;
	}

	return (NULL);
}
