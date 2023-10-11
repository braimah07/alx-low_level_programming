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
	char a;

	for (d = '0'; d <= '9'; d++)
		putchar (d);
	for (a = 'a'; a <= 'f'; a++)
		putchar (a);
	putchar ('\n');
=======
#include <stdio.h>

/**
 *main - entry
 *
 *Return: 0
 */


int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
	putchar(digit);
	}

	for (digit = 'a'; digit <= 'f'; digit++)
	{
	putchar(digit);
	}

	putchar('\n');
>>>>>>> b04ff48 (My commit)
	return (0);
}
