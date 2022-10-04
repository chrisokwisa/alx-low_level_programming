#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 *		using the Linear search
 *@array: pointer to the first element of the array to search
 *@size: number of elements in array
 *@value: value to search for
 *Return: the first index where value is located
 *	if value is not present in array / if array is NULL, must return -1
 *Desc: Every time you compare a value in the array to the value you
 *	are searching you to print this value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("value checked array[%ld] = [%d]", i, array[i]);
		printf("\n");
		if (array[1] == value)
			return (i);
	}
	return (-1);
}
