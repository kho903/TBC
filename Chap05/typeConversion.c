#include <stdio.h>

int main()
{
    // promotions in assignments

    short s = 64;
    int i = s;

    float f = 3.14f;
    double d = f;
    // printf("%d %f\n", i, d);

    // demotion in assignments
    d = 1.25;
    f = 1.25;
    f = 1.123;
    // printf("%f %f", d, f);

    /* ranking of types in operations */
    // long double > double > float
    // unsigned long long , long long
    // unsigned long, long
    // unsigned, int
    // short int, unsigned short int
    // signed char, char, unsigned char
    // _Bool
    // Ref: Google 'Integer conversion rank'
    d = f + 1.234;
    f = f + 1.234;

    /* automatic promotion of function arguments */
    // 1. Functions without prototypes
    // 2. Varidadic functions

    /* casting operators */
    d = (double)3.14f;
    i = 1.6 + 1.7;
    // printf("%d\n", i);
    i = (int)1.6 + (int)1.7;
    // printf("%d", i);

    /* more examples */
    char c;
    // int i;
    // float f;
    f = i = c = 'A';               // 65
    printf("%c %d %f\n", c, i, f); // A 65 65.000000
    c = c + 2;                     // 'C', 67
    i = f + 2 * c;                 // 65.0f + 2 * 67
    printf("%c %d %f\n", c, i, f); // C 199 65.000000

    c = 1106; // demolition, 1106 = 0b10001010010, 0b01010010 = 1106 % 256 = 82 = 'R'
    printf("%c\n", c);
    c = 83.99;
    printf("%c\n", c);
    return 0;
}