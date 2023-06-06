#include "lists.h"

/**
 * sum_listint - function that calcs the sum of all data in list
 * @head: linked list first node
 * Return: sum altogether
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	if (temp)
	{
		sum += temp->n;
		temp = temp->next;

		return (sum);
	}

	else
	{
		return (0);
	}
}
