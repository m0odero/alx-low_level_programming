include "main.h"

/**
 * _isalpha - return 1 if is alphabet
 * @c: the character to check
 * Return: 1 if is alpha, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
