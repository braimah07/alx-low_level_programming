#include <stdio.h>

int get_endianness(void) {
    unsigned int num = 1;
    unsigned char *byte = (unsigned char *)&num;
    return (int)*byte;
}

int main(void) {
    int n;

    n = get_endianness();
    if (n != 0) {
        printf("Little Endian\n");
    } else {
        printf("Big Endian\n");
    }
    return 0;
}
