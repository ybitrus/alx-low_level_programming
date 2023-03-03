#include "main.h"
/**
 * _strcmp - To compare string values
 * @s1: First input value
 * @s2: Second input value
 *
 * Return: s1 or s2 else 0
 */
int _strcmp(char *s1, char *s2)
{
	int x;

	x = 0;
	while (s1[x] != '\0' && s2[x] != '\0')
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
		x++;
	}
	return (0);
}
