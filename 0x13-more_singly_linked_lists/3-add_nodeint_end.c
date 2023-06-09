#include "lists.h"

/**
 * add_nodeint_end - main function that adds node to the end of linked list
 * @n: data to insert in new element
 * @head: pointer to 1st element
 * Return: pointer to new node, NUll if otherwise
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return ('\0');

	new->n = n;
	new->next = '\0';

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
