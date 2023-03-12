#include "main.h"
/**
 * _strcat - To concatenates strings values
 * @dest: String value
 * @src: string values
 *
* Return: Always Return (dest)
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
