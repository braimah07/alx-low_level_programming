#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: result
 * @size_r: result lenght
 * Return: sum
 *
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k, l = 0, f, s, d = 0;

	while (n1[i] != '\0')
	i++;
	while (n2[j] != '\0')
	j++;
	if (i > j)
	l = i;
	else
	l = j;
	if (l + 1 > size_r)
	return (0);
	r[l] = '\0';
	for (k = l - 1; k >= 0; k--)
	{
	i--;

	j--;
	if (i >= 0)
	f = n1[i] - '0';
	else
	f = 0;
