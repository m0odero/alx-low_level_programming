#include "main.h"

/**
 * _abs - return 1 if is lower
 * @c: the character to check
 * Return: 1 if is lower, 0 otherwise
 */

int _abs(int c)
{
	if (c >= 0)
	{
		return (c);
	}
	else
	{
		return (-1 * c);
	}
}
