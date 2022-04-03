#include "stdio.h"

/**
 * main - program that prints its name
 * @argc: number of arguments passed
 * @argv: array of arguments
 * Return: 0
 */

int main(int agrc, char *argv[])
{
	int i = argc - argc;

	printf("%s\n", argv[i]);
	return (0);
}
