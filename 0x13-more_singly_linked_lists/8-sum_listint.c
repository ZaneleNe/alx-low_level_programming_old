#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - finds sum of all nodes
 * @head: reference to head node
 *
 * Return: sum of all elements in linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
