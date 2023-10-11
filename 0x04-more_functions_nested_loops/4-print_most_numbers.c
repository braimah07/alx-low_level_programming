#include "main.h"

/**
 * print_most_numbers - print numbers from 0 - 9 except 2 and 4
 * @:
 * Return: void
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
<<<<<<< HEAD
		if (!(c == '2' || c == '4'))
		_putchar(c);
	}
		_putchar('\n');
=======
	if (!(c == '2' || c == '4'))
	_putchar(c);
	}
	_putchar('\n');
>>>>>>> b04ff48 (My commit)
}
