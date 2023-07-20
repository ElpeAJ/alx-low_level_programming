#include "lists.h"

/**
 * print_dlistint - prints all elements of a list
 * @h: The head of the list
 * Return: The number of nodes in list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes_num = 0;
	const dlistint_t *present_head = h;

	while (present_head != 0)
	{
		printf("%d\n", present_head->n);
		present_head = present_head->next;
		nodes_num++;
	}
	return (nodes_num);
}
