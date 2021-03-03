#include <stdio.h>

double average(double *arr, int n);

int main()
{
    double arr1[5] = {10, 13, 12, 7, 8};
    double arr2[5] = {1.8, -0.2, 6.3, 13.9, 20.5};
    double arr3[3] = {1.8, -0.2, 6.3};

    printf("Address = %p\n", arr1);
    printf("Size = %zd\n", sizeof(arr1));
    printf("Address = %p\n", arr2);
    printf("Size = %zd\n", sizeof(arr2));

    printf("Avg = %f\n", average(arr1, 5));
    printf("Avg = %f\n", average(arr2, 5));
    printf("Avg = %f\n", average(arr3, 3));
}

double average(double *arr, int n)
{
    double avg = 0.0;
    for (int i = 0; i < n; ++i)
    {
        avg += arr[i];
    }
    avg /= (double)n;
    return avg;
}