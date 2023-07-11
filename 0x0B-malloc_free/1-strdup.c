#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplictate to a new moemory space location
 * @str: char
 * Return: pointer to the copied string (Success), NULL (Error)
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str ==  NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;

	dup = malloc(sizeof(char) * (i + 1));

	if (dup == NULL)
		return(NULL);

	for (len = 0; str[len]; len++)
		dup[len] = str[len];

	return (dup);
}
