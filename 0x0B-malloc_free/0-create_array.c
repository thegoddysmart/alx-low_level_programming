#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of chars
 * and initialize it with a specific char
 * @size: size of array
 * @c: char to initialize the array c
 *
 * Return: pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);
	if (array == 0 || array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
