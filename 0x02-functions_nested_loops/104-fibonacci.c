#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Calculates and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, separated by a comma and space.
 *
 * Return: 0 for success
 */
int main(void)
{
    unsigned long a = 1, b = 2, next;
    int count = 0;

    printf("%lu, %lu, ", a, b);
    count += 2;

    while (count < 98)
    {
        next = a + b;
        printf("%lu", next);

        count++;
        if (count < 98)
            printf(", ");
        else
            printf("\n");

        a = b;
        b = next;
    }

    return (0);
}
