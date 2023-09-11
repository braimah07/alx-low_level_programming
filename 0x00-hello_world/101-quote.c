#include <unistd.h>

/**
 *main - entry
 *
 *Return: 0
 */



int main(void)
{
	char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = 60;

	write(2, quote, len);

	return (1);
}
