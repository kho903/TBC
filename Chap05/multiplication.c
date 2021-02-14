#include <stdio.h>

int main()
{
    double seed, target, interest;
    printf("Input seed money : ");
    scanf("%lf", &seed);

    printf("Input target money : ");
    scanf("%lf", &target);

    printf("Input annual interest : ");
    scanf("%lf", &interest);

    double fund = seed;
    int year_count = 0;
    while (fund <= target)
    {
        fund += fund * interest * 0.01;
        printf("%lf\n", fund);
        year_count += 1;
    }

    printf("It takes %d years\n", year_count);

    return 0;
}