#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	unsigned long f1 = 0, f2 = 1, f_sum;
	float tot_sum;

	while (1)
	{
		f_sum = f1 + f2;
		if (f_sum > 4000000)
			break;

		if ((f_sum % 2) == 0)
			tot_sum += f_sum;

		f1 = f2;
		f2 = f_sum;
	}
	printf("%.0f\n", tot_sum);

	return (0);
}
