#include <stdio.h>
#define SIZE 5

int main()
{
    int sum = 0, i;
    double avg = 0.0;
    int num[SIZE];
    printf("Enter 5 numbers : ");
    for (i = 0; i < SIZE; i++)
        scanf("%d", &num[i]);

    for (i = 0; i < SIZE; i++)
        sum += num[i];

    avg = sum / SIZE;

    printf("Sum = %d\n", sum);
    printf("Avg = %.2f\n", avg);
}