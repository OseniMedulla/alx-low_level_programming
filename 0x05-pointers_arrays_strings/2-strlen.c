#include "main.h"

/**
 * _strlen - function to return the length of a string
 *
 * @s : position of the first character in the string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
	{
		len++;
	}

	return (len);
}
