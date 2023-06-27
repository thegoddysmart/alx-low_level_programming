#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string parameter input
 * Return: Nothing
 */

void puts_half(char *str)
{
	int l, n, index;
	
	index = 0;
	for (l = 0; str[l] != '\0'; l++)
		index++;
	n = (index / 2);
	if ((index % 2) == 1)
		n = ((index + 1) / 2);

	for (l = n; str[l] != '\0'; l++)
		_putchar(str[l]);
	_putchar('\n');
}
		
