#include "main.h"

/**
 * _islower - print the alphabet in lowercase followed by a newline
 */

int _islower(int c)
{
	char c;

	if (c >= 'a' && c <= 'z')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
