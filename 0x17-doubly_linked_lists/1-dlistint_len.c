#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: pointer to the head function the listint_t list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
