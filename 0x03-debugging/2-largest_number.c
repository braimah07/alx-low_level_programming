#include <stdio.h>
#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

<<<<<<< HEAD
	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
=======
	if (a >= b && a >= c)
	{
	largest = a;
	}
	else if (b >= a && b >= c)
	{
	largest = b;
	}
	else
	{
	largest = c;
>>>>>>> b04ff48 (My commit)
	}
	return (largest);
}
