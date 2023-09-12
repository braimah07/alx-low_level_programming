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

	n = rand() - RAND_MAX / 2; /* Generate a random number between
	*-(RAND_MAX/2) and (RAND_MAX/2)
	*/

	printf("%d is ", n);

	if (n > 0)
	{
	printf("positive\n");
	}
	else if (n < 0)
	{
	printf("negative\n");
	}
	else
	{
	printf("zero\n");
	}

	return (0);
}
