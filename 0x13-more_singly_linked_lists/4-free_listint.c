#include "lists.h"

/**
 * free_listint - main function that frees the linked list
 * @head: listint_t to be freed
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
