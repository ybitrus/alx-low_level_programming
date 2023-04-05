#include "lists.h"

/**
 * print_listint - To prints all the elements of a listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return:  Number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{

	size_t nodes = 0;


	while (h != NULL)
	{

		printf("%d\n", h->n);
		nodes++;

		h = h->next;
	}

	return (nodes);
}
