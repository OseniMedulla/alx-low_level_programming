#include <stdio.h>

/**
 * main - print all arguments it receives
 * @argc: argument count
 * @argv: argument array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0

	while (i < argc)
	{
		printf("%s\n", agrv[i]);
		i++;
	}

	return (0);
}
