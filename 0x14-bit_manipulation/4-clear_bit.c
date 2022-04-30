#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: unsigned long int
 * @index: an unsigned int
 * Return: return 1 when bit is 1 else 0
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

