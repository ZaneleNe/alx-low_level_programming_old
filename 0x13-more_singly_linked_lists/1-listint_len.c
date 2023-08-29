#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: head pointer to linked list
 *
 * Return: total elements in linked list
 */
size_t listint_len(const listint_t *h)
{
	int nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
