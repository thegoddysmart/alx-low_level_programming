#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the number to print the times table for
 */

void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	int i, j, k;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			if (j == 0)
			{
				_putchar(k + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (k < 100)
					_putchar(' ');
				if (k < 10)
					_putchar(' ');
				if (k >= 100)
					_putchar((k / 100) + '0');
				if (k >= 10)
					_putchar(((k / 10) % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
