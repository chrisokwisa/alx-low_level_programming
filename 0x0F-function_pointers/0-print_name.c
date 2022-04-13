#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - function that prints name
 * @name: the name to be printed
 * @f: pointer to the function to be printed
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	
	f(name);
}

