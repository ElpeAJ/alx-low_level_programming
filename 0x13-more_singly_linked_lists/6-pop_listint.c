#include "lists.h"

/**
 * pop_listint - function that del the head node of a linked list
 * @head: pointer to first ele
 * Return: the content in the ele deleted, 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
