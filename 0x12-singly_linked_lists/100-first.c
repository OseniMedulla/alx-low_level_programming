#include <stdio.h>

void turtle(void) __attribute__ ((constructor));

/**
  * turtle - prints strng before main
  * Return: Nothing.
  */
void turtle(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
