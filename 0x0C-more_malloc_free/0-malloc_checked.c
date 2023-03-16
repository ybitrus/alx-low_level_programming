#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - to allocates memory using malloc
 * @b: bytes to allocate
 *
 * Return: a pointer
 */

void *malloc_checked(unsigned int b)
{

	void *ptr;



	ptr = malloc(b);



	if (ptr == NULL)

		exit(98);



	return (ptr);
}
