#include "lists.h"

/**
 * delete_dnodeint_at_index - Function that deletes node at index of a said list
 * @head: pointer to the list
 * @index: Index of node to be removed.
 *
 * Return: 1 if succeeded and -1 if it is failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *present = NULL, *node = NULL, *initial = NULL;
	unsigned int count_node = 0;

	present = (*head);
	while (present != NULL)
	{
		node = present;
		if (count_node == index)
		{
			node = present->next;
			if (node != NULL)
			{
				node->prev = initial;
			}
			if (initial != NULL)
			{
				initial->next = node;
			}
			if (index == 0)
			{
				(*head) = node;
			}
			free(present);
			return (1);
		}
		initial = present;
		present = present->next;
		count_node++;

	}
	return (-1);
}
