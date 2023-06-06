#include "lists.h"

/**
 * pop_listint - main function that del the head node of a linked list
 * @head: pointer to first element
 * Return: data that was deleted inside the elements, 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	if (!head || !*head)
	{
		return (0);
	}
	else
	{
		return (num);
	}
}
