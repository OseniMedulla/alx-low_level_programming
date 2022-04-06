#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string using malloc
 * @str: string to duplicate
 * Return: Pointer to a the duplicated string
 */

char *_strdup(char *str)
{
	char *a;
	int i, b;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	a = malloc(i * sizeof(*a) + 1);
	if (a == NULL)
		return (NULL);

	for (b = 0; b < i; b++)
		a[b] = str[b];
	a[b] = '\0';

	return (a);
}
