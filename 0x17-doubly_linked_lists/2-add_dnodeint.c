#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning ofa list
 * @head: A pointer to the  address of the head of the listint_t list
 * @n: The integer for the new node to contain
 *
 * Return: If the function fails - NULL
 *		otherwise the address of the new element.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;

	*head = new;

	return (new);
}
