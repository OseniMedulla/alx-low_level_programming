#include "main.h"

/**
 * get_bit - is a function that returns the bit at index position of a number
 * @n: is unsigned long int number
 * @index: is an unsigned int
 * Return: return 1 when bit is 1 else 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int comp_i = 0;

	while (n)
	{
		if (comp_i == index)
		{
			if (n % 2)
				return (1);
			else
				return (0);
		}

		n = n / 2;
		comp_i++;
	}

	if (index > comp_i && index < 63)
		return (0);

	return (-1);
}
