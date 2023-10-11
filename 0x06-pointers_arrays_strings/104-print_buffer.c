#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer 10 bytes at a time, starting with
<<<<<<< HEAD
 *		the byte position, then showing the hex content,
 *		then displaying printable charcaters.
=======
 *              the byte position, then showing the hex content,
 *              then displaying printable charcaters.
>>>>>>> b04ff48 (My commit)
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 */

void print_buffer(char *b, int size)
{
	int byte, index;

	for (byte = 0; byte < size; byte += 10)
	{
<<<<<<< HEAD
		printf("%08x: ", byte);

		for (index = 0; index < 10; index++)
		{
			if ((index + byte) >= size)
				printf("  ");
			else
				printf("%02x", *(b + index + byte));
			if ((index % 2) != 0 && index != 0)
				printf(" ");
		}
		for (index = 0; index < 10; index++)
		{
			if ((index + byte) >= size)
				break;
			else if (*(b + index + byte) >= 31 &&
					*(b + index + byte) <= 126)
				printf("%c", *(b + index + byte));
			else
				printf(".");
		}
		if (byte >= size)
			continue;
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
=======
	printf("%08x: ", byte);

	for (index = 0; index < 10; index++)
	{
	if ((index + byte) >= size)
	printf("  ");
	else
	printf("%02x", *(b + index + byte));
	if ((index % 2) != 0 && index != 0)
	printf(" ");
	}
	for (index = 0; index < 10; index++)
	{
	if ((index + byte) >= size)
	break;
	else if (*(b + index + byte) >= 31 &&
	*(b + index + byte) <= 126)
	printf("%c", *(b + index + byte));
>>>>>>> b04ff48 (My commit)
