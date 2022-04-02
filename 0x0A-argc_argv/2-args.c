#include <stdio.h>

/**
 * main - print all arguments it receives
 * @argc: argument count
 * @argv: argument array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", agrv[i]);
	}

	return (0);
}
