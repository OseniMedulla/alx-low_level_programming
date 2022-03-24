#include "main.h"

/**
 * _strncpy - function to copy a certain number of characters
 *
 * @dest : destination address
 *
 * @src : source address
 *
 * @n : number of characters to be copied
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];

		if (src[i] == 0)
			break;
	}

	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
