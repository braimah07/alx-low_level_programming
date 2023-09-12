#include <stdio.h>

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

	putchar('\n');

	return (0);
}
