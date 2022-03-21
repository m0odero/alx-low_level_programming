#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string whose length is to be returned
 * Return: the lenth of the string
 */

int _strlen(char *s)
{
	char c;
	int i;

	i = 0;
	c = s[i];
	while (c != '\0')
	{
		i = i + 1;
		c = s[i];
	}
	return (i);
}
