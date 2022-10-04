#include "search_algos.h"

/*
 * linear_search - Searches for a value in an array of integers
 *	using linear search
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: value to search
 * Desc: Every time you compare the value you are
 *	are searching, you have to print this value
 *Return: the first index where value is located
 *	if value is not presnt in array, if array is NULL,
 *	function must retuen -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
