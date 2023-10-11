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
	int a;

	for (a = '0'; a <= '9'; a++)
		putchar (a);
=======

/**
 *main - entry
 *
 *Return: 0
 */


int main(void)
{
	int number = '0';

	while (number <= '9')
{
	putchar(number);
	number++;
	}
>>>>>>> b04ff48 (My commit)
	putchar('\n');
	return (0);
}
