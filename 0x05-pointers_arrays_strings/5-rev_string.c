#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the pointer to the string being reversed.
 */

void rev_string(char *s)
{
	int i;
	char temp;
	int len;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	len = i;
	j = 0;
	while (i  >= len / 2)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i--;
		j++;
	}
}
