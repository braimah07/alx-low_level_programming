#include <stdio.h>
#include <stdlib.h>
#include <time.h>
<<<<<<< HEAD
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
=======

/**
*main - entry
*
*Return: 0
*/


>>>>>>> b04ff48 (My commit)
int main(void)
{
	int n;

<<<<<<< HEAD
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
=======
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

>>>>>>> b04ff48 (My commit)
	return (0);
}
