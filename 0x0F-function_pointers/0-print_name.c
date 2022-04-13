#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: the name to be printed
 * @f: pointer to the function to be printed
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		return;
	f(name);
}

