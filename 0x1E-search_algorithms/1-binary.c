#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 *		using the Binary search
 *@array: Pointer to the first element of the array to search in
 *@size: number of elements in array
 *@value: value to search for
 *Return: the index where value is located
 *	If value is not present in array / if array is NULL,
 *	must return -1
 *Desc: Print the array being searchefd every time it changes
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, low, high;

	if (array == NULL)
		return (-1);

	for (low = 0, high = low - 1; high >= low;)
	{
		printf("searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = low + (high - low) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			high = i - 1;
		else
			low = i + 1;
	}
	return (-1);
}
