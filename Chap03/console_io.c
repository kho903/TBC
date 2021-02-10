#include <stdio.h>

int main()
{
    int i = 0, j = 0, sum = 0;
    printf("Input Two Integers : ");
    scanf("%d%d", &i, &j);
    printf("Your Numbers are %d and %d\n", i, j);

    sum = i + j;
    printf("%d plus %d = %d\n", i, j, sum);
    // printf("%d plus %d = %d\n", i, j, i + j);
    return 0;
}