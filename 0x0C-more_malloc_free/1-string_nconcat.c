#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function to concatenate
 * @s1: input one
 * @s2: input two
 * @n: number of byte to be copy
 *
 * Return: Always (result)
 */

char *string_nconcat(char *s1, char *s2,  unsigned int n)
{

	char *result;
	unsigned int len1, len2, result_len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}

	result_len = len1 + n + 1;
	result = malloc(result_len);

	if (result == NULL)
	{
		return (NULL);
	}

	memcpy(result, s1, len1);
	memcpy(result + len1, s2, n);
	result[len1 + n] = '\0';

	return (result);
}
