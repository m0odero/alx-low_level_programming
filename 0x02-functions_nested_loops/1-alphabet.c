#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase followed by a newline
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}