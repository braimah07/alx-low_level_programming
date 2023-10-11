<<<<<<< HEAD
#include <stdlib.h>
=======
>>>>>>> b04ff48 (My commit)
#include "main.h"
#include <limits.h>
#include <string.h>

/**
<<<<<<< HEAD
 * _atoi - coverts a string to integer
 * @str: pointer to string to be converted
 *
 * Return: converted string
=======
 * _atoi - converts a string to an integer
 * @str: pointer to string to be converted
 *
 * Return: converted integer
>>>>>>> b04ff48 (My commit)
 */

int _atoi(char *str)
{
	int sign = 1, base = 0, i = 0;

<<<<<<< HEAD
	for (i = 0; str[i] != '\0' && (str[i] < '0' || str[i] > '9'); i++)
	{
		if (str[i] == '-' || str[i] == '+')
		sign *= 1 - 2 * (str[i] == '-');
		if (str[i + 1] == '\0')
		return (0);
	}
		while (str[i] >= '0' && str[i] <= '9')
		{
			if (base > INT_MAX / 10 || (base == INT_MAX / 10 && str[i] - '0' > 7))
			{
				if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
			}
			base = 10 * base + (str[i++] - '0');
		}

		return (base * sign);
=======
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
>>>>>>> b04ff48 (My commit)
}
