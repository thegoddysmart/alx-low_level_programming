#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase, followed by a new line
 *
 */

void print_alphabet_x10(void)
{
	int i;
	char ch;

	for (i = 0; i < 10; i++)
	{
		ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
	}
	_putchar('\n');
}
