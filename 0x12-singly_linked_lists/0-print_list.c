#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: head structure
 *
 * Return: total number of nodes in a list.
 */
size_t print_list(const list_t *h)
{
	unsigned int len = 0;

	while (h != NULL)
	{
		len++;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (len);
}
