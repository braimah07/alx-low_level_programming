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
	int d, p;

	for (d = '0'; d < '9'; d++)
	{
		for (p = d + 1; p <= '9'; p++)
		{
			if (p != d)
			{
				putchar(d);
				putchar(p);

				if (d == '8' && p == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
=======

/**
 *main - entry
 *
 *Return: 0
 */


int main(void)
{
	int i, j;

	for (i = 0; i <= 8; i++)
	{
	for (j = i + 1; j <= 9; j++)
	{
	putchar(i + '0');
	putchar(j + '0');

	if (i < 8 || j < 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}

	putchar('\n');

>>>>>>> b04ff48 (My commit)
	return (0);
}
