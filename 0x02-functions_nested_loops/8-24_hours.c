#include "main.h"
/**
 * jack_bauer - Check main
 * Description: function prints every minute in one day
 * Return: Nothing
 */
void jack_bauer(void)
{
	int x, y;

	for (x = 0; x < 24; x++)
	{
<<<<<<< HEAD
		for (y = 0; y < 60; y++)
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar(':');
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
			_putchar('\n');
		}
=======
	for (y = 0; y < 60; y++)
	{
	_putchar((x / 10) + '0');
	_putchar((x % 10) + '0');
	_putchar(':');
	_putchar((y / 10) + '0');
	_putchar((y % 10) + '0');
	_putchar('\n');
	}
>>>>>>> b04ff48 (My commit)
	}
}
