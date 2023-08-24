#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - prints all the elements of a list_t list.
 * @h: head structure
 *
 * Return: total number of nodes in a list.
 */
size_t list_len(const list_t *h)
{
	unsigned int len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
