#include "main.h"

/**
 *_strlen - length of a string
 *@s: A pointer to an int that will be changed or updated
 *
 * Return: void
 */
int _strlen(char *s)
{
int u;
	
u = 0;
while (s[u] != '0')
{
u++;
}
return (u);
}
