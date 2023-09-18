#include <stdio.h>
#include <limits.h> /* Include limits.h to access INT_MAX and INT_MIN */

int _atoi(char *s);

int main(void)
{
    printf("%d\n", _atoi("4"));
    printf("%d\n", _atoi("10"));
    printf("%d\n", _atoi("-3"));
    printf("%d\n", _atoi("99"));
    printf("%d\n", _atoi("-40"));
    printf("%d\n", _atoi(" ------++++++-----+++++--98"));
    printf("%d\n", _atoi("Hello ----- world\n"));
    printf("%d\n", _atoi("+++++ +-+ 2242454"));
    printf("%d\n", _atoi("2147483647"));
    printf("%d\n", _atoi(" + + - -98 Battery Street; San Francisco, CA 94111 - USA "));
    printf("%d\n", _atoi("---++++ -++ Sui - te - 402 #cisfun :)"));
    printf("%d\n", _atoi(""));
    printf("%d\n", _atoi("-2147483648"));

    printf("SUCCESS\n"); /* Print "SUCCESS" upon successful execution */

    return 0;
}

int _atoi(char *s)
{
    int sign = 1; /* Initialize sign to positive */
    int result = 0;

    /* Skip leading spaces and check for sign */
    while (*s == ' ' || (*s == '-' && *(s + 1) >= '0' && *(s + 1) <= '9') || (*s == '+' && *(s + 1) >= '0' && *(s + 1) <= '9'))
    {
        if (*s == '-')
            sign *= -1;
        s++;
    }

    /* Convert the remaining digits */
    while (*s >= '0' && *s <= '9')
    {
        /* Check for overflow */
        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && (*s - '0') > INT_MAX % 10))
        {
            if (sign == 1)
                return INT_MAX;
            else
                return INT_MIN;
        }
        result = result * 10 + (*s - '0');
        s++;
    }

    return result * sign;
}
