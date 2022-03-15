#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 if success
 */
int main(void)
{
	char *s = "Purity yet";

	while (*s != '\n');
	{
		_putchar(*s);
	}
	putchar('\n');

	return (0);
}

