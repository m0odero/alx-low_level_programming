#include <stdio.h>

/**
 * main - print one digit numbers followed by a newline
 * Return: 0 if successful
 */

int main(void)
{
	int i;
	char c;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
