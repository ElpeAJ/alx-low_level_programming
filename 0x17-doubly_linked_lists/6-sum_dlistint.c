#include "lists.h"

/**
 * sum_dlistint - Function that returns the sum of n
 * @head: Pointer to the list
 *
 * Return: sum of n, otherwise 0 for empty list
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *present = NULL;
	int sum = 0;

	present = head;
	while (present)
	{
		sum += present->n;
		present = present->next;
	}

	return (sum);

}
