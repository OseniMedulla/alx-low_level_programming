#include "main.h"

/**
 * main - program that prints its name
 * @argc: number of arguments passed
 * @argv: array of arguments
 * Return: 0
 */

int main(int agrc, char *argv[])
{
	char *name;
	int i;

	name = argv[argc - argc];
	i = 0;
	while (name[i])
	{
		_putchar(name[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
