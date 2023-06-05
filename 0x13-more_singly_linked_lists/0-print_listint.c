#include "lists.h"

/**
 * print_listint - main function to print all elements
 * @h: linked list to print
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
