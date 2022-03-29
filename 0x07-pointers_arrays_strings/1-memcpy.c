#include "main.h"

/**
 * _memcpy -function that copies n bytes from memory area
 * @dest: destination
 * @src: source
 * @n: number of memory area to be copied
 * Return: a pointer to 'dest'
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i]
	}
	return (dest);
}
