#include "main.h"
/**
 * print_last_digit - print the last digit
 * @n: the passed arguments
 * Return: return the last digit
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
<<<<<<< HEAD
		x = -1 * (n % 10);
	else
		x = n % 10;
=======
	x = -1 * (n % 10);
	else
	x = n % 10;
>>>>>>> b04ff48 (My commit)
	_putchar((x % 10) + '0');
	return (x % 10);
}
