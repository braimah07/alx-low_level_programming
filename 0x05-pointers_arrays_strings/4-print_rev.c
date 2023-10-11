#include <string.h>
#include "main.h"

/**
 * print_rev - print string in reversed order
 * @str: string to be reversed
 */

void print_rev(char *str)
{
	int i, len = strlen(str);

	for (i = len - 1; i >= 0; i--)
<<<<<<< HEAD
		_putchar(str[i]);
=======

	_putchar(str[i]);
>>>>>>> b04ff48 (My commit)

	_putchar('\n');
}
