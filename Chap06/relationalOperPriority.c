#include <stdio.h>

int main()
{
    int x = 1, y = 2, z;

    // 같은 연산자
    x > y + 2;
    x > (y + 2);

    x = y > 2;
    x = (y > 2);

    x != y == z;
    (x != y) == z;

    return 0;
}