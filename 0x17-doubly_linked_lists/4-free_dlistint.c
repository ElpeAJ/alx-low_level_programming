#include "lists.h"

/**
 * free_dlistint - Frees a list
 * @head: A pointer to the head of list
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *present = NULL;

	if (head == NULL)
	{
		return;
	}

	present = head;
	while (present->next != NULL)
	{
		free(present->prev);
		present = present->next;
	}
	free(present->prev);
	free(present);
}
