#include "main.h"
#include <limits.h>
#include <string.h>

/**
 * _atoi - converts a string to an integer
 * @str: pointer to string to be converted
 *
 * Return: converted integer
 */

int _atoi(char *str)
{
	int sign = 1, base = 0, i = 0;

	/* Skip leading spaces */
	while (str[i] == ' ')
	i++;

	/* Handle sign */
	if (str[i] == '-' || str[i] == '+')
	{
	sign = 1 - 2 * (str[i] == '-');
	i++;
	}

	for (; str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'); i++)
	{
	if (base > INT_MAX / 10 || (base == INT_MAX / 10 && str[i] - '0' > 7))
	{
	if (sign == 1)
	return (INT_MAX);
	else
	return (INT_MIN);
	}
	base = 10 * base + (str[i] - '0');
	}

	return (base * sign);
}
