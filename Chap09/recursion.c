#include <stdio.h>

void my_func(int);

int main()
{
    my_func(1);

    return 0;
}

void my_func(int n)
{
    printf("Level %d, address of variable n = %p\n", n, &n);

    // stop condition
    if (n < 5)
        my_func(n + 1);

    // tail recursion
    printf("Level %d, address of variable n = %p\n", n, &n);
}