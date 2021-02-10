#include <stdio.h>

int main()
{
    float won = 0.0f;
    float dollar = 0.0f;
    printf("Input Won : ");
    scanf("%f", &won);

    dollar = won * 0.00090f; // f를 붙히지 않으면 double
    printf("Dollar  = %f", dollar);
    return 0;
}