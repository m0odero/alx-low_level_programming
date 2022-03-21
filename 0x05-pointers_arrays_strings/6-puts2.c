#include "main.h"

/**
 * puts2 - prints every other character in a string followed by a newline
 * @str: the string whose characters are to be printed
 */

void puts2(char *str)
{
	char c;
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
