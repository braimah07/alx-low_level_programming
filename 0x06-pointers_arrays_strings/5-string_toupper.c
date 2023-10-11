#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_toupper - convert string to upper case
 * @str: pointer to string to be converted
 *
 * Return: pointer to converted string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
<<<<<<< HEAD
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
=======
	if (str[i] >= 'a' && str[i] <= 'z')
	str[i] = str[i] - 32;
>>>>>>> b04ff48 (My commit)
	}
	return (str);
}
