#include "main.h"
/**
 * swap_int - function that swap intergers
 *
 * @a: first swaping integers
 * @b: second swaping integers
 */

void swap_int(int *a, int *b)
{
	int sw = *a;

	*a = *b;
	*b = sw;


}
