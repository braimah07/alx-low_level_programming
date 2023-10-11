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
	int p, q;

	for (p = 0; p <= 98; p++)
	{
		for (q = p + 1; q <= 99; q++)
		{
			putchar((p / 10) + '0');
			putchar((p % 10) + '0');
			putchar(' ');
			putchar((q / 10) + '0');
			putchar((q % 10) + '0');

			if (p == 98 && q == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
=======

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 99; num1++)
	{
	for (num2 = num1 + 1; num2 <= 99; num2++)
	{
	putchar((num1 / 10) + '0');
	putchar((num1 % 10) + '0');
	putchar(' ');
	putchar((num2 / 10) + '0');
	putchar((num2 % 10) + '0');

	if (num1 == 98 && num2 == 99)
	{
	putchar('\n');
	}
	else
	{
	putchar(',');
	putchar(' ');
	}
	}
	}

>>>>>>> b04ff48 (My commit)
	return (0);
}
