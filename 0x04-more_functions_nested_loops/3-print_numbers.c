#include "main.h"

/**
 * print_numbers - function that print num 0 to 9
 *
 * Return: 0
 */

void print_numbers(void)
{
	int n = 0;
	
	while (n < 10)
	{
		_putchar(n + '0');
		n++;
	}

	_putchar('\n');
	
}
