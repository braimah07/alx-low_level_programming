#include <stdio.h>

/**
 * main - this is a function to print number of arguments passed to it.
 * @argc: argc parameter
 * @argv: an array of command listed
 * Return: 0 for success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
