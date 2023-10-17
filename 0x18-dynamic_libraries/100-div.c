#include <stdio.h>

int div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		fprintf(stderr, "Error: Division by zero\n");
		return (0);
	}
}
