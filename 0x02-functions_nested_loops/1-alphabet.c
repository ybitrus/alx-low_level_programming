#include "main.h"

/**
 * main - To prints Alphabet in lower case
 *
 * Return: Always 0 (sucess)
 */

void print_alphabet(void)
{
	char alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}

	_putchar('\n');
}
