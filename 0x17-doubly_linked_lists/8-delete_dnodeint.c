#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index
 * @head: Pointer to a pointer to the head of the list
 * @index: Index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node, *previous_node;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	current_node = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(current_node);
		return (1);
	}
	while (current_node)
	{
		if (i == index)
		{
			previous_node->next = current_node->next;
			if (current_node->next)
				current_node->next->prev = previous_node;
			free(current_node);
			return (1);
		}
		previous_node = current_node;
		current_node = current_node->next;
		i++;
	}
	return (-1);
}
