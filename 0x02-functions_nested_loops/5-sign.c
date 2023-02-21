#include "main.h"

/**
 * print_sign - printed function
 * @n: assign variable
 *
 * Return: 1, -1 or 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('0');
		return (-1);
	}
	else
		return (0);
}
