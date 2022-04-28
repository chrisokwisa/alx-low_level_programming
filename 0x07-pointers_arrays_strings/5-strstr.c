#include "main.h"

/**
 * _strstr - function that locates a substring
 *@haystack: string to be scanned
 *@needle: string to search
 *Return: a pointer to the character int str1 that matches one of the
 *charaters in str2, NULL if no such character is found.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}
		if (*j == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}

