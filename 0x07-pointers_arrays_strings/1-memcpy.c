#include "main.h"

/**
 * _memcpy -function that copies n bytes from memory area
 * @dest: destination
 * @src: source
 * @n: number of memory area to be copied
 * Description: _memcpy() function copies n bytes from memory area src to memory area dest
Returns a pointer to dest
 * Return: a pointer to dest
 */

char *memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
