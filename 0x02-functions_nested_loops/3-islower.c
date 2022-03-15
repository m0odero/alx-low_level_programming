#include "main.h"

/**
 * _islower - return 1 if is lower
 * @c: the character to check
 * Return: 1 if is lower, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
