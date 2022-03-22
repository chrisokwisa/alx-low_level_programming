#include "main.h"

/**
 * _puts - Prints a string to stdout.
 *
 * @str: The string to be printed.
 */

void _puts(char *str)
{
char *c;
int m;

c = str;

for (m = 0; c[m]; m++)
{
_putchar('\n');
}
