#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)

{
	int intType;
	float floatType;
	double doubleType;
	char charType;
	long int long_intType;
	long long long_longType;

	printf("Size of char: %zu byte(s)\n", sizeof(charType));
	printf("Size of int: %zu byte(s)\n", sizeof(intType));
	printf("Size of long int: %zu byte(s)\n", sizeof(long_intType));
	printf("Size of long long int %zu byte(s)\n", sizeof(long_longType));
	printf("Size of float: %zu byte(s)\n", sizeof(floatType));

		return (0);
}
