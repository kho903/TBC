#include <stdio.h>

int compute_pow(int base, int exp); // 프로토타입

int main()
{
    // 3 4 (네제곱)
    // 3*3*3*3 = 81
    int base, exp, i, result;

    while (scanf("%d %d", &base, &exp) == 2)
    {
        result = compute_pow(base, exp);
        printf("Result = %d\n", result);
    }

    return 0;
}

int compute_pow(int base, int exp)
{
    int i, result;
    result = 1;
    for (i = 0; i < exp; ++i)
        result *= base;
    return result;
}
