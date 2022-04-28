#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array
 * @array: pointer to array to be executed
 * @action: pointer to function
 * @size: array size
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
