<<<<<<< HEAD
#include "main.h"
=======
include "main.h"
>>>>>>> b04ff48 (My commit)

/**
 * print_line - print lines (_) n number of times
 * @n: integer variable
 */

void print_line(int n)
{
<<<<<<< HEAD
	if (n < 1)
		_putchar('\n');
	else
	{
		while (n--)
			_putchar('_');
		_putchar('\n');
=======
	if (n <= 1)
	_putchar('\n');
	else
	{
	for (int i = 0; i < n; i++)
	_putchar('_');
	_putchar('\n');
>>>>>>> b04ff48 (My commit)
	}
}
