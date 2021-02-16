#include <stdio.h>

int main()
{
    int status, inputInt, sum = 0;

    printf("Enter an integer (q to quit) : ");
    status = scanf("%d", &inputInt); // return value of scanf()
    while (status == 1)              // equality operator
    {
        sum += inputInt;
        printf("Enter an integer (q to quit) : ");
        status = scanf("%d", &inputInt);
    }
    printf("Sum = %d", sum);

    return 0;
}