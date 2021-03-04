#include <stdio.h>

int main()
{
    int n = 5;
    printf("Input array length : ");
    scanf("%d", &n);

    float my_arr[n]; // Note : cannot change length after declaration

    for (int i = 0; i < n; i++)
        my_arr[i] = (float)i;

    for (int i = 0; i < n; i++)
        printf("%.2f ", my_arr[i]);

    return 0;
}