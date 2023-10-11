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
	char a, e, q;

	e = 'e';
	q = 'q';
	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != e && a != q)
			putchar (a);
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
	char letter = 'a';


	while (letter <= 'z')
{
	if (letter != 'q' && letter != 'e')
{
	putchar(letter);

}
	letter++;

}

	putchar('\n');

>>>>>>> b04ff48 (My commit)
	return (0);
}
