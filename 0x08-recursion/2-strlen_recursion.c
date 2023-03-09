#include "main.h"

/**
 * _strlen_recursion -  To returns the length of a string.
 * @s: measuring string
 *
 * Return: len
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
