#include "main.h"

/**
 * print_line - To draw a straight line
 * @n: Numbers of line
 */

void print_line(int n)
{
	int x = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (x < n)
		{
			_putchar(95);
			x++;
		}

		_putchar('\n');
	}
}
