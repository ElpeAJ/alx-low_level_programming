#include "lists.h"

/**
 * get_nodeint_at_index - function that returns node at nth index
 * @head: first node in linked list
 * @index: index of return node
 * Return: pointer to nth node, or else NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
