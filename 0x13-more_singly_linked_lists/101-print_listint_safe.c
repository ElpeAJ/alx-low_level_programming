#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - function that counts the number of nodes
 * @head: A pointer to run check
 * Return: 0 if list isn't looped, else return the number of nodes
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *lion, *bear;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	lion = head->next;
	bear = (head->next)->next;

	while (bear)
	{
		if (lion == bear)
		{
			lion = head;
			while (lion != bear)
			{
				nodes++;
				lion = lion->next;
				bear = bear->next;
			}

			lion = lion->next;
			while (lion != bear)
			{
				nodes++;
				lion = lion->next;
			}

			return (nodes);
		}

		lion = lion->next;
		bear = (bear->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - function that prints listint_t well
 * @head: pointer to the head of list
 * Return: The number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		}
	}
	else
{
	for (index = 0; index < nodes; index++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}

	printf("-> [%p] %d\n", (void *)head, head->n);
}

return (nodes);
}
