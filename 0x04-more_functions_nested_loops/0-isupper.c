#include "main.h"

/**
 * _isupper - To checks for uppercase
 * @c: Character to return
 *
 * Return: 1 if is c else 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
