#include "main.h"

/**
 * _isdigit - checks if the char is digit
 * @c: the value to test
 * Return: 1 iff char is digit; 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
