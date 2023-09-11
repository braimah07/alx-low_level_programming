#include <unistd.h>

int main(void)
{
	char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = 57; // Length of the quote

	write(2, quote, len);

	return (1);
}
