#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: varaiable
 * Return: Always 0.
 */

int factorial(int n)
{
	int a = 1;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (a);
	}
	else
	{
		a = n * factorial(n - 1);
	}
	return (a);
}
