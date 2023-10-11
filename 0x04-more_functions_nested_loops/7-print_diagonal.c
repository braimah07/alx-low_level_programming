#include "main.h"

/**
 * print_diagonal - prints diagonal line n times.
 * @n: times diagonal line is printed
 * Return: no return.
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
<<<<<<< HEAD
		for (j = 0; j < 1; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (i < (n - 1))
			_putchar('\n');
=======
	for (j = 0; j < 1; j++)
	{
	_putchar(' ');
	}
	_putchar(92);
	if (i < (n - 1))
	_putchar('\n');
>>>>>>> b04ff48 (My commit)
	}
	_putchar('\n');
}
