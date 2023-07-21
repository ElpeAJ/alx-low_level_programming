#include "lists.h"

/**
 * get_dnodeint_at_index - to find the node @ given index
 * @head: Address to the head node in list
 * @index: Index of nth node to be located in list
 *
 * Return: Node at nth index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *present = NULL;
	unsigned int count_node = 0;

	present = head;
	while (present != NULL)
	{
		if (count_node == index)
		{
			return (present);
		}
		present = present->next;
		count_node++;
	}

	return (NULL);
}
