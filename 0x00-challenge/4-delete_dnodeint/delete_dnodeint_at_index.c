#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Delete a node at a specific index from a list
 *
 * @head: A pointer to the first element of a list
 * @index: The index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *tmp;
	unsigned int p;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	for (p = 0; current != NULL && p < index - 1; p++)
		current = current->next;

	if (current == NULL || current->next == NULL)
		return (-1);
	
	tmp = current->next;
	current->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = current;
	else
		current->next = NULL;
	free(tmp);
	return (1);
}
