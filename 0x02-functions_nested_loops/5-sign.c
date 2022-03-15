#include "main.h"

/**
 * print_sign - return 1 if is lower
 * @c: the character to check
 * Return: 1 if is lower, 0 otherwise
 */

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		if (c == 0)
		{
			_putchar(0);
			return (48);
		}
		else
		{
			_putchar('-');
			return (-1);
		}
	}
}
