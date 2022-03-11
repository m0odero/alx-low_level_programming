#include <stdio.h>

/**
 * main - print the alphabet in lowercase and uppercase
 * followed by a newline
 * Return: 0 if successful
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
