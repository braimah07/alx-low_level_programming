#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */

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
	printf(n > 0){
		printf("is positive\n");
	} else if (n == 0) {
		printf("Number is zero");
	} else {
		printf("number is less than 0");
	}
	return (0);
}
