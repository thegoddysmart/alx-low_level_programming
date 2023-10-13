#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to a pointer to the head of the list
 * @idx: The index where the new node should be added
 * @n: Value to store in the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current_node;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	current_node = *h;
	while (current_node)
	{
		if (i == idx - 1)
		{
			new_node->next = current_node->next;
			if (new_node->next)
				new_node->next->prev = new_node;
			new_node->prev = current_node;
			current_node->next = new_node;
			return (new_node);
		}
		current_node = current_node->next;
		i++;
	}
	free(new_node);
	return (NULL);
}
