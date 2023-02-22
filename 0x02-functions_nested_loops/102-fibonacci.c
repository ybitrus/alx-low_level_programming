#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int x;
	unsigned long f1 = 0, f2 = 1, result;

	for (x = 0; x < 50; x++)
	{
		result = f1 + f2;
		printf("%lu", result);

		f1 = f2;
		f2 = result;

		if (x == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
