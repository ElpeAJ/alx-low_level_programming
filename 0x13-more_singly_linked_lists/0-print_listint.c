#include "lists.h"
#include <stddef.h>

/**
 * print_listint - main function to print all elements
 * @h: linked list to print
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;/* Declaring size_t */

	while (h)
	{
		printf("%d\n", h->n);
		num++; /* prints all elements */
		h = h->next;
	}
	return (num);
}
