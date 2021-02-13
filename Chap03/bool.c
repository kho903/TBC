#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("%u\n", sizeof(_Bool)); // 1 byte

    _Bool b0, b1;
    b0 = 0;                    // false
    b1 = 1;                    // true
    printf("%d %d\n", b0, b1); // 0 1

    bool b2, b3;
    b2 = true;
    b3 = false;
    printf("%d %d\n", b2, b3); // 1 0

    return 0;
}