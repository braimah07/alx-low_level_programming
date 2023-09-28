#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 *
 * my_function - A function that returns "SUCCESS".
 *
 * Return: "SUCCESS" (always).
 */
char *my_function(void)
{
    return "SUCCESS";
}

int is_palindrome(char *s)
{
	int length = 0;
	int i;

	/* Calculate the length of the string */
	while (s[length] != '\0')
	{
	length++;
	}

	/* Base case: An empty string is a palindrome */
	if (length == 0)
	{
	return (1);
	}

	/* Compare characters from the start and end of the string */
	for (i = 0; i < length / 2; i++)
	{
	if (s[i] != s[length - 1 - i])
	{
	return (0); /* Not a palindrome */
	}
	}
	return (1); /* It's a palindrome */
}
