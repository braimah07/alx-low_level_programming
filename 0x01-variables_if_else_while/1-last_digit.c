#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - entry
 *
 *Return: 0
 */


int main(void)

{
	int n;

	srand(time(0)); /* Seed the random number generator with the current time */

	n = rand(); /* Generate a random number */

	printf("Last digit of %d is %d", n, n % 10);

	if (n % 10 > 5)
	{
	printf(" and is greater than 5\n");
	}
	else if (n % 10 == 0)
	{
	printf(" and is 0\n");
	}
	else
	{
	printf(" and is less than 6 and not 0\n");
	}

	return (0);
}
