#include "main.h"

/**
 * _strchr - function that allocates a character in a string
 * @s: string to scan
 * @c: char to be searched
 * Return: a pointer to the first occurrence
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}


