#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array of integers
 * @n: the number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int temp;

	i = 0;
	j = n - 1;
	while (i < n/2)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
