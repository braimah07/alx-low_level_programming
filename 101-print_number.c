#include "main.h"

/**
<<<<<<< HEAD
 * print_number - prints an integer.
 * @n: integer
 */

void print_number(int n)
{
	unsigned int n1;

	n1 = n;
	if (n < 0)
	{
	_putchar('-');
	n1 = -n;
	}
	if (n1 / 10 != 0)
	print_number(n1 / 10);
	_putchar((n1 % 10) + '0');
=======
 * print_number - prints an integer
 * @n: the integer to be printed
 */
void print_number(int n)
{
    if (n == 0)
    {
        _putchar('0');
        return;
    }

    if (n < 0)
    {
        _putchar('-');
        n = -n;  // Make n positive for further processing
    }

    if (n / 10 != 0)
    {
        print_number(n / 10);
    }

    _putchar((n % 10) + '0');
>>>>>>> b04ff48 (My commit)
}
