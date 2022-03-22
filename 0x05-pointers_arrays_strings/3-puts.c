#include "main.h"

/**
 * puts - function to print string
 *
 * @str : string to be printed
 *
 * Return : void
 */
void _puts(char *str)
{
	int = 1;
	i = 0;
	while (*(str + i) != '\0')
	{
		_putschar(*(str + i));
		i++;
	}
	_putschar('\n');
}
