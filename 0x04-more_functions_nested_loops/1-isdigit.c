#include "main.h"

/**
 * _isdigit - To check for digit
 * @c: variable number to be check
 *
 * Return: 1 if character 0 anything else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
