#include "main.h"

int _atoi(char *s)
{
    int sign = 1; // Initialize sign to positive
    int result = 0;

    // Skip leading spaces and check for sign
    while (*s == ' ' || (*s == '-' && *(s + 1) >= '0' && *(s + 1) <= '9') || (*s == '+' && *(s + 1) >= '0' && *(s + 1) <= '9'))
    {
        if (*s == '-')
            sign *= -1;
        s++;
    }

    // Convert the remaining digits
    while (*s >= '0' && *s <= '9')
    {
        // Check for overflow
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
