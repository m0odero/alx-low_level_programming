#include "main.h"

/**
 * print_rev - pritns a string in reverse and ends with newline.
 * @s: the pointer to the string being printed.
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i != 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
