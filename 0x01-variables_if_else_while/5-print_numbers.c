#include <stdio.h>
<<<<<<< HEAD
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success);
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		printf("%d", a);
	printf("\n");
=======

/**
 *main - entry
 *
 *Return: 0
 */


int main(void)
{
	char number = '0';

	while (number <= '9')
{
	putchar(number);
	number++;
	}
	putchar('\n');
>>>>>>> b04ff48 (My commit)
	return (0);
}
