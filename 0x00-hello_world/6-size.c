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

	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	printf("Size of double: %zu bytes\n", sizeof(doubleType));
	printf("Size of char: %zu bytes\n", sizeof(charType));
	printf("Size of long int: %zu bytes\n", sizeof(long_intType));
	printf("Size of long long int %zu bytes\n", sizeof(long_longType));

		return (0);
}
