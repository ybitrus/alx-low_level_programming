#include "main.h"

/**
 * factorial - To calculate factorial number
 * @n: Number of factorial to be calculate
 *
 * Return: factorial value
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
