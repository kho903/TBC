#include <stdio.h>

int main()
{
    int *ptr = 0; // try double*, long long*, char*, void*
    // printf("%d", *ptr); // Error in this lecture
    // printf("%p %lld\n", ptr, (long long)ptr);
    // ptr++;
    // printf("%p %lld\n", ptr, (long long)ptr);

    // ptr = -ptr; // Not working
    // ptr = +ptr; // Not working

    // Subtraction
    double arr[10];
    double *ptr1 = &arr[1], *ptr2 = &arr[3];

    // ptr2 = ptr1 + ptr2; // Not working
    int i = ptr2 - ptr1; // 주소값의 차이는 의미가 있을수 있다.

    // printf("%p %p %d\n", ptr1, ptr2, i);
    printf("%lld %lld %d\n", (long long)ptr1, (long long)ptr2, i);

    return 0;
}