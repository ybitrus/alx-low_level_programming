#include "main.h"
/**
 * _strpbrk - to search a string set byte
 * @s: string variable
 * @accept: pointer
 *
 * Return: null
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}

return ('\0');
}
