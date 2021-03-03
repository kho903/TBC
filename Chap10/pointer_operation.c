#include <stdio.h>

int main()
{
    /*
    Pointer operations
    - Assignment
    - Value finding (deferencing)
    - Taking a pointer address
    - Adding an integer to a pointer
    - Incrementing a pointer
    - Subtracting an integer from a pointer
    - Decrementing a pointer
    - Defferencing
    - Comparisons
    */

    int arr[5] = {100, 200, 300, 400, 500};
    int *ptr1, *ptr2, *ptr3;

    ptr1 = arr;
    printf("%p %d %p\n", ptr1, *ptr1, &ptr1); // dereferencing, Taking a pointer address

    ptr2 = &arr[2];
    printf("%p %d %p\n", ptr2, *ptr2, &ptr2);

    ptr3 = ptr1 + 4;
    printf("%p %d %p\n", ptr3, *ptr3, &ptr3);

    // Differencing
    printf("%td\n", ptr3 - ptr1); // Note : t is for pointer difference

    ptr3 = ptr3 - 4;
    printf("%p %d %p\n", ptr3, *ptr3, &ptr3);

    ptr1++; // Incrementing, ptr1 = ptr1 + 1
    ptr1--; // Decrementing
    --ptr1;
    ++ptr1;

    if (ptr1 == ptr3)
        printf("Same\n");
    else
        printf("Different\n");

    double d = 3.14;
    double *ptr_d = &d;
    // casting을 할 것
    if ((void *)ptr1 == (void *)ptr_d) // warning C4133 : '==' : incompatible types
        printf("Same\n");
    else
        printf("Difference\n");

    return 0;
}