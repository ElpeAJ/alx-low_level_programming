include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes a node in a linked list at a certain index
 * @head: pointer to the first ele in the list
 * @index: index of node to del
 * Return: 1 if success or -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
        listint_t *temp = *head;
        listint_t *current = NULL;
        unsigned int i = 0;

        if (*head == NULL)
                return (-1);

        if (index == 0)
        {
                *head = (*head)->next;
                free(temp);
                return (1);
        }

        while (i < index - 1)
        {
                if (!temp || !(temp->next))
                        return (-1);
