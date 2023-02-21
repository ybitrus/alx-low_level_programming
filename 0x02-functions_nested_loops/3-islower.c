#include "main.h"
/**
 * int _islower - Function to check lower character
 * @c: Lower case character
 *
 * Return: return 1 if is c
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
