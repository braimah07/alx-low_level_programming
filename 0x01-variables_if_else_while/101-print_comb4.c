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
	int d, p, q;

	for (d = '0'; d < '9'; d++)
	{
		for (p = d + 1; p <= '9'; p++)
		{
			for (q = p + 1; q <= '9'; q++)
			{
				if ((p != d) != q)
				{
					putchar(d);
					putchar(p);
					putchar(q);

					if (d == '7' && p == '8')
						continue;

					putchar(',');
					putchar(' ');
				}
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
	int i, j, k;

	for (i = 0; i <= 7; i++)
	{
	for (j = i + 1; j <= 8; j++)
	{
	for (k = j + 1; k <= 9; k++)
	{
	putchar(i + '0');
	putchar(j + '0');
	putchar(k + '0');

	if (i < 7 || j < 8 || k < 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}

	putchar('\n');

>>>>>>> b04ff48 (My commit)
	return (0);
}
