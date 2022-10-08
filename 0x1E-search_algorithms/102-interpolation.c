#include "search_algos.h"

/**
 * interpolation_search - searches for a value in sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: If value is not present in array of if array is NULL
 *	your function must return -1
 *	use powers of 2 as exponential; ranges to search in array
 *Des: Prints a value every time it is compared in the array
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, m, n;

	if (array == NULL)
		return (-1);

	for (m = 0, n = size - 1; n >= m;)
	{
		i = m + (((double)(n - m) / array[n] - array[m])) * (value - array[m]);
		if (i < size)
			printf("value checked array[%ld] =  [%d]\n", i, array[i]);
		else
		{
			printf("value checked array[%ld] is out of range\n", i);
			break;
		}
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			n = i - m;
		else
			m = i + m;
	}
	return (-1);
}

