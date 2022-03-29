#include "main.h"

/**
 * print_chessboard - print the chessboard, 2d array
 * @a: chess rows
 * Return: Always 0
 */

void print_chessboard(char (*a)[8])
{
	int x;
	int y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
			if (y == 7)
				_putchar('\n');
		}
	}
}
