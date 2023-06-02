#include <stdio.h>
#include "lists.h"

/**
 * print_list -  Main function that prints all ele of linked list
 * @h: pointer to list_t to be printed
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		s++;
		h = h->next;
	}

	return (s);
}
