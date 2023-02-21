#include "main.h"

/**
 * _isalpha - function that checks for alphabets
 * @c: alphabet to be checks
 *
 * Return: return 1 if is c else 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
