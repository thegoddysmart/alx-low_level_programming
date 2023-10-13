#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data of a list
 * @head: Pointer to the head of the list
 * Return: Sum of all data, or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
