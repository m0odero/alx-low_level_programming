#include "main.h"

/**
 * _isdigit - checks whether the number is a digit
 * @c: the value to be checked
 * Return: 1 if is digit; 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c<=57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
