#include "main.h"

/**
 * print_last_digit - return 1 if is lower
 * @c: the character to check
 * Return: 1 if is lower, 0 otherwise
 */

int print_last_digit(int c)
{
	int last;

	if (c < 0)
	{
		c = c * -1;
	}
	last = c % 10;
	if (last < 0)
	{
		last = -last;
	}
	_putchar(last + '0');
	return (last);
}
