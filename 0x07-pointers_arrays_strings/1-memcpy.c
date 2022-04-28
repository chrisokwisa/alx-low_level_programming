#include "main.h"

/**
 * _memcpy - function that copies memory area
 *@dest: A pointer to the memory area destination
 *@src: A pointer to the source data to be copied
 *@n: number of bytes to be copied
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int byte = n;

	for (; i < byte ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

