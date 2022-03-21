#include "main.h"

/**
 * function that swaps to integers swap_int - for file 1-swap.c
 * @a: integer
 * @b: integer
 * Return: Always 0.
 */
void swap_int(int *a, int *b);
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

