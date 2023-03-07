#include "main.h"

/**
 * _strchr - A function to locate character string
 * @s: string value
 * @c: character in the string
 *
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
