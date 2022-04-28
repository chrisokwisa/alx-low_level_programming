#include "lists.h"
#include <stdio.h>

/**
 *print_listint - function that prints elements of a listint_t
 *@h: pointer to the header of the list_t list.
 *
 * Return: The number of nodes in the list_t list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}


