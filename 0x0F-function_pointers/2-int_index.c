#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: pointer to array
 * @size: array size
 * @cmp: pointer to function
 * Return: integer
 */
int int_index(int *array, int size, int(*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NUll)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}

