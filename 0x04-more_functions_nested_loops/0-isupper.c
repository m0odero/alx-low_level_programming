#include "main.h"

/**
 * _isupper - checks if the char is upper case
 * @c: the value to test
 * Return: 1 iff char is uppercase; 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
