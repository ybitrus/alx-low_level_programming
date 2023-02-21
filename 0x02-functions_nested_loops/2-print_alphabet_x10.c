#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet in 10  place
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int l_b = 0;
	int letter;

	while (l_b < 10)
	{
		letter = 'a';
			while (letter <= 'z')
			{
				_putchar(letter);
				letter++;
			}
		l_b++;
		_putchar('\n');
	}
}
