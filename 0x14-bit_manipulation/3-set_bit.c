#include "main.h"

/**
 * set_bit - is a function set 1 at index bit position of a number
 * @n: is unsigned long int number
 * @index: is an unsigned int
 * Return: return 1 success and 0 for error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return(1);
}
