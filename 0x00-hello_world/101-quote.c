<<<<<<< HEAD
#include<unistd.h>
/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
=======
#include <unistd.h>

/**
 *main - entry
 *
 *Return: 0
 */



int main(void)
{
	char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = 61;

	write(2, quote, len);

>>>>>>> b04ff48 (My commit)
	return (1);
}
