#include <stdio.h>

/**
 * main - prints number of args
 * @argc: int argument counter
 * @argv: char value argument counter
 * Return: always success
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));

	return (0);
}
