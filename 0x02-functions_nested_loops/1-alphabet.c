#include "main.h"

/**
 * main - print the alphabet in lowercase followed by a newline
 * Return: 0 if successful
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
