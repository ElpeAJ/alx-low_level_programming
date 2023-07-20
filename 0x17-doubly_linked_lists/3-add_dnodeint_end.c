#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of list
 * @head: A pointer to the head of list
 * @n: The int the new node will contain
 *
 * Return: new node otherwise NULL.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *present = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if ((*head) == NULL)
	{
		(*head) = new_node;
		return (*head);
	}
	present = (*head);
	while (present->next != NULL)
	{
		present = present->next;
	}
	new_node->prev = present;
	present->next = new_node;

	return (new_node);
}
