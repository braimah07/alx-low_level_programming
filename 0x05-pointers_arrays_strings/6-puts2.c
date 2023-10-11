#include "main.h"

/**
 * puts2 - print even number of a string
 * @str: string variable
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
<<<<<<< HEAD
		if (i % 2 == 0)
			_putchar(str[i]);
		i += 1;
=======
	if (i % 2 == 0)
	_putchar(str[i]);
	i += 1;
>>>>>>> b04ff48 (My commit)
	}
	_putchar('\n');
}
