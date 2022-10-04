#ifndef SEARCh_ALGOS_H
#define SEARCH_ALGOS_H

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

/*
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the root in the list
 * @next: pointer to the next node
 *
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - singly linked list
 * @n: integer
 * @index: Indx of the node in the list
 * @next: pointer to the node
 * @express: pointer to the next node
 *
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif 
