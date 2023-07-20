#include "lists.h"

/**
 * dlistint_len - prints the number of elements of a list
 * @h: The head of the list
 * Return: The number of nodes in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes_num = 0;
	const dlistint_t *present_head = h;

	while (present_head != 0)
	{
		present_head = present_head->next;
		nodes_num++;
	}
	return (nodes_num);
}
