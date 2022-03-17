#include "main.h"

/**
 * print_line - print a line acoss the screen
 * @n: the number of _ to print
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
