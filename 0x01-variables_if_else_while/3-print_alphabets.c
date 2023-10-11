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
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar (a);
	for (a = 'A'; a <= 'Z'; a++)
		putchar(a);
=======

/**
 *main - entry
 *
 *Return: 0
 */


int main(void)
{
	char letter = 'a';
	int i; /* Declare i outside the loop */

	for (i = 0; i < 26; i++)
{
	putchar(letter);
	letter++;
	}

	letter = 'A';

	for (i = 0; i < 26; i++)
{
	putchar(letter);
	letter++;
	}

>>>>>>> b04ff48 (My commit)
	putchar('\n');

	return (0);
}
