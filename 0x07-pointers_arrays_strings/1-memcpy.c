#include "main.h"

/**
 * _memcpy - A function to copy bytes from memory
 * @dest: Return pointer
 * @src: Memory area
 * @n: number of memory
 *
 * Return: Return (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
