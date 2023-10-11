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
	char a;

	for (a = 'z'; a >= 'a'; a--)
		putchar(a);
=======

/**
 *main - entry
 *
 *Return: 0
 */


int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
{
	putchar(letter);
	letter--;
	}
>>>>>>> b04ff48 (My commit)
	putchar('\n');
	return (0);
}
