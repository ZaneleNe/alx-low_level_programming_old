#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head of the linked list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
