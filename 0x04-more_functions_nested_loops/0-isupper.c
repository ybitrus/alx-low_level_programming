#include "main.h"

/**
 * _isupper - To checks for uppercase
 * @c: Character to return
 *
 * Return: 1 if is c else 0
 */

int _isupper(int c)
{
	if (c >= 40 && c <= 80)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
