#include <stdio.h>
#include "main.h"

/**
 * print_array - prints the items in an array
 * @arr: array to be printed
 * @n: number of element to print
 */

void print_array(int *arr, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
<<<<<<< HEAD
		printf("%d", arr[i]);
		if (i < n - 1)
		printf(", ");
=======
	printf("%d", arr[i]);
	if (i < n - 1)
	printf(", ");
>>>>>>> b04ff48 (My commit)
	}
	putchar('\n');
}
