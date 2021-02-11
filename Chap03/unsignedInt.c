#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
    // unsigned int i = 0;
    // printf("%u\n", sizeof(unsigned int)); // 4
    // printf("%u", sizeof(i));              // 4

    // unsigned int i = 0b1111; // 0b : 이진수
    /*
    unsigned int u_max = UINT_MAX;
    unsigned int u_min = 0;
    signed int i_max = INT_MAX;
    signed int i_min = INT_MIN;
    // printf("%u\n", i); // unsigned int : %u
    printf("max of uint = %u\n", u_max);
    printf("min of uint = %u\n", u_min);
    printf("max of int = %d\n", i_max);
    printf("min of int = %d\n", i_min);
    */
    // 오버플로우
    unsigned int u_max = 0 - 1; // UINT_MAX + 1;
    // 1111 + 1 = 10000 -> 4비트이면 0000
    // 0000 - 1 = 1111

    // i to binary representation
    char buffer[33];
    _itoa(u_max, buffer, 2);

    // print decimal and binary
    printf("decimal : %u\n", u_max);
    printf("binary : %s\n", buffer);

    return 0;
}