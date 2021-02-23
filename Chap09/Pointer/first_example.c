#include <stdio.h>

int main()
{
    int a, b;

    a = 123;

    int *a_ptr; // * asterisk
    a_ptr = &a; // & address-of operator
    printf("%d %d %p\n", a, *a_ptr, a_ptr);
    printf("============================\n");

    *a_ptr = 456; // * : re-direction or de-referencing

    printf("%d %d %p\n", a, *a_ptr, a_ptr);
    printf("============================\n");

    // b = a_ptr;
    b = *a_ptr;
    printf("%d\n", b);
    printf("============================\n");

    *a_ptr = 789;
    printf("%d %d %p %p\n", a, *a_ptr, a_ptr, &b);
    printf("============================\n");

    b = 12;
    printf("%d\n", b);
    a = 1004;
    printf("%d %d %p %p\n", a, *a_ptr, a_ptr, &b);
}