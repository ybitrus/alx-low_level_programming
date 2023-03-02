#include "main.h"
#include <stdint.h>
#include <string.h>
#include <time.h>
#include <stdio.h>

/**
 * _strcat - To concatenates strings
 * @dest: inputs
 * @src: inputs
 *
 * Return: (dest)
 */

char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';
	return (dest);
}
