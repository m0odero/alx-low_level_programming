#include "main.h"

/**
 * times_table - 
 */

void times_table(void)
{
	int k;

	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; i <=9; j++)
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
