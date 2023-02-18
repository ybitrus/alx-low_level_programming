#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char c = 'a';
	char d = 'z';
	char e = 'A';
	char f = 'Z';

	while (c <= d)
	{
		putchar(c);
		c++;
	}
	while (e <= f)
	{
		putchar(e);
		e++;
	}

	putchar('\n');

	return (0);
}
