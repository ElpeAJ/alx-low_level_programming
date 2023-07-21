#include "lists.h"

/**
 * insert_dnodeint_at_index - At a specified index, adds new node
 * @h: pointer to the list
 * @idx: Index where new node should be inserted
 * @n: The value of  newly added node
 *
 * Return: Address of new node or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *present = NULL, *initial = NULL, *node = NULL;
	unsigned int count_node = 0;

	present = (*h);
	if (idx == count_node)
	{
		return (add_dnodeint(h, n));
	}

	while (present != NULL)
	{
		if (count_node == idx)
		{
			node = malloc(sizeof(dlistint_t));
			node->n = n;
			node->prev = initial;
			node->next = present;
			present->prev = node;
			initial->next = node;
			break;
		}
		initial = present;
		present = present->next;
		count_node++;
	}
	if (present == NULL && count_node != idx)
	{
		return (NULL);
	}
	if (present == NULL)
	{
		return (add_dnodeint_end(h, n));
	}

	return (node);
}
