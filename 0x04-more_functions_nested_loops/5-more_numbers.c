#include "main.h"

/**
 * more_numbers - Nexsted loop 0 to 14 up to 10 times
 */

void more_numbers(void)
{
	int x = 0;
	int y;

	while (x < 10)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
			{
				_putchar((y / 10) + '0');
			}

			_putchar((y % 10) + '0');
		}

		x++;

		_putchar('\n');
	}
}
