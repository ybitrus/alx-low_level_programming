#include "main.h"
/**
 * reverse_array - To reverse array of integers
 * @a: the array
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
