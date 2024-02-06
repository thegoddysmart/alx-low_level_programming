#include "search_algos.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
/**
 * linear_search - Searches for a value in an array
 * @array: Array to search the value in
 * @size: Size of the array
 * @value: Value to look for
 *
 * Return: Index of the value found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
