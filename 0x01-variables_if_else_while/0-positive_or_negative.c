#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
#include <stdio.h>

/**
*main - entry
*
*Return: 0
*/


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf"(%d is ", n);

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
