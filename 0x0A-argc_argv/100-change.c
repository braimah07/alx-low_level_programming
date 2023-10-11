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
	int num, j, result = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
<<<<<<< HEAD
		printf("%s\n", "Error");
		return (1);
=======
	printf("%s\n", "Error");
	return (1);
>>>>>>> b04ff48 (My commit)
	}

	num = atoi(argv[1]);
	if (num < 0)
<<<<<<< HEAD
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coins[j])
		{
			num -= coins[j];
			result++;
		}
=======

	{
	printf("0\n");
	return (0);
	}
	for (j = 0; j < 5 && num >= 0; j++)
	{
	while (num >= coins[j])
	{
	num -= coins[j];
	result++;
	}
>>>>>>> b04ff48 (My commit)
	}
	printf("%d\n", result);
	return (0);
}
