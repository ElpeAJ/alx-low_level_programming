#include <stdlib.h>
#include "lists.h"

/**
 * list_len - main function that returns ele in linked vlist
 * @h: pointer to the list_t list
 * Return: number of ele in h
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
			h = h->next;
	}
	return (n);
}
