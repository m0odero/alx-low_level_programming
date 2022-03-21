#include "main.h"

/**
 * puts_half - prints the last half of the string
 * @str: the string whose last half is to be printed
 */

void puts_half(char *str)
{
	int len;
	int i;
	int half_len;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	len = i;
	if (len % 2 == 0)
	{
		half_len = len / 2;
	}
	else
	{
		half_len = (len / 2) + 1;
	}
	while (str[half_len] != '\0')
	{
		_putchar(str[half_len]);
		half_len = half_len + 1;
	}
	_putchar('\n');
}
