#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - adds 2 numbers
 * @a: first int
 * @b: second int
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract 2 numbers
 * @a: first in
 * @b: second int
 * Return: difference of 2 numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply 2 numbers
 * @a: first int
 * @b: second int
 * Return: products
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of 2 numbers
 * @a: first int
 * @b: second int
 * Return: result of division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - get remainder from the division of 2 numbers
 * @a: first int
 * @b: second int
 * Return: remainder of division of the numbers
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
