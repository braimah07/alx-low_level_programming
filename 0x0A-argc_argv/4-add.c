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
	int result = 0, num, i, j, k;

	for (i = 1; i < argc; i++)
	{
<<<<<<< HEAD
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
=======
	for (j = 0; argv[i][j] != '\0'; j++)
	{
	if (argv[i][j] > '9' || argv[i][j] < '0')
	{
	printf("%s\n", "Error");
	return (1);
	}
	}
>>>>>>> b04ff48 (My commit)
	}

	for (k = 1; k < argc; k++)
	{
<<<<<<< HEAD
		num = atoi(argv[k]);
		result += num;
=======
	num = atoi(argv[k]);
	result += num;
>>>>>>> b04ff48 (My commit)
	}
	printf("%d\n", result);

	return (0);
}
