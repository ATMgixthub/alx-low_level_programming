#include "main.h"

/**
 * reverse_array - reverse array elements
 * @a: array
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int tmp, i = 0;
	int end = n - 1; /* omit null terminator in length */

	while (i < end)
	{
		tmp = a[i];
		a[i] = a[end];
		a[end] = tmp;
		i++, end--;
	}
}
