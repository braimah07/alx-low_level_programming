#include "main.h"

/**
 * _puts - prints a string
 * @str: string to be printed
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
<<<<<<< HEAD
		_putchar(str[i]);
		i++;
=======
	_putchar(str[i]);
	i++;
>>>>>>> b04ff48 (My commit)
	}
	_putchar('\n');
}
