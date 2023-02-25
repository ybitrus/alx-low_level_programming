#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * main - To print prime factors
 *
 * Return Always (0) 
 */

int main(void)
{
	long x, y;
	long n = 612852475143;
	double square = sqrt(n);

	for (x = 1; x <= square; x++)
	{
		if (n % x == 0)
		{
			y = n / x;
		}
	}

	printf("%ld\n", y);

	return (0);
}
