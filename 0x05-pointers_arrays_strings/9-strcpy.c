#include "main.h"

/**
 * *_strcpy - copy one string to another
 * @dest: the address to the destination string
 * @src: the address of the source string
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];

	return (&dest);
}
