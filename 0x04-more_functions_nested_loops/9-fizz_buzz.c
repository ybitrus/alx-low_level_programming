#include <stdio.h>
#include "main.h"
/**
 *main - To print (1) to (100)
 *
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x > 1)
		{
			printf(" ");
		}

		if ((x % 3 == 0) && (x % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", x);
		}

		if (x < 100)
		if (x != 100)
		{
			printf(" ");
		}
		}
		printf("\n");
		return (0);
}
