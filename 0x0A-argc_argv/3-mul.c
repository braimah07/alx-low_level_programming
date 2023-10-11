#include <stdio.h>
#include <stdlib.h>

/**
 * main - this is a function to print number of arguments passed to it.
 * @argc: argc parameter
 * @argv: an array of command listed
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int result = 0, num1, num2;

	if (argc != 3)
	{
<<<<<<< HEAD
		printf("%s\n", "Error");
		return (1);
=======
	printf("%s\n", "Error");
	return (1);
>>>>>>> b04ff48 (My commit)
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
