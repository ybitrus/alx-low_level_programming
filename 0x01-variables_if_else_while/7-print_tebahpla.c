#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)

{
	char r = 'a';
	char j;

	for (j = 'z'; j >= r; j--)

		putchar(j);
	putchar('\n');
	return (0);

}
