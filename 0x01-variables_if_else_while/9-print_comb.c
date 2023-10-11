#include <stdio.h>
<<<<<<< HEAD
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar (d);
		if (d != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
=======

/**
 *main - entry
 *
 *Return: 0
 */


int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
	putchar(digit + '0');

	if (digit < 9)
	{
	putchar(',');
	putchar(' ');
	}
	}

>>>>>>> b04ff48 (My commit)
	putchar('\n');
	return (0);
}
