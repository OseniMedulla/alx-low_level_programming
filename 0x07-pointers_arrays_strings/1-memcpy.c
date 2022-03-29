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
	char *size;

	size = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++
			n--;
	}
	return (dest)
}
