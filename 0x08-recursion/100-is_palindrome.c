#include "main.h"
<<<<<<< HEAD
/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 * Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - compares each character of the string.
 * @s: string
 * @n1: smallest iterator.
 * @n2: biggest iterator.
 * Return: .
 */
int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if a string is a palindrome.
 * @s: string.
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
=======
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
>>>>>>> b04ff48 (My commit)
}
