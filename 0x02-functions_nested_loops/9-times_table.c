#include "main.h"

/**
 * times_table - print times table
 */

void times_table(void)
{
	int k;
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; i <= 9; j++)
		{
			k = i * j;
			if (k < 10)
			{
				_putchar(k + '0');

			}
			else
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (k <= 9)
				{
					_putchar(' ');
				}
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
