#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns nnumber of elements in a linked listint_t list
 * @h: A pointer to the number in the listint_t list.
 * Return: The numberof elements in the listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}

