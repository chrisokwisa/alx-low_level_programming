#include "main.h"
/**
 *_puts.c - prints a string
 *@str: A pointer to an an int that will be changed
 *
 * Return: void meaning the answer is correct
 */

void _puts(char *str)
{
char *c;
int m;

c = str;

for (m = 0; c[m]; m++)
{
_putchar (c[m]);
}
_putchar('\n');
}

