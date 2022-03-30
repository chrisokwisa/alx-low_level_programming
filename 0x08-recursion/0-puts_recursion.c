#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @s: variable
 *
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	int p = 0;

	if (s[p] != '\0')
	{
		_putchar (s[p]);
		p++;
		_puts_recursion(s + 1);
	}
	else
		_putchar ('\n');
}
