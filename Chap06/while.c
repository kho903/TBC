#include <stdio.h>

int main()
{
    /*
    while (expression)
        statement
    */

    int i;

    /*
    i = 1;
    while (i < 5)        // infinite loop
        printf("Hi!\n"); // iteration

    i = 1;
    while (--i < 5) // wrong direction
        printf("Hi!\n");
    
    i = 1;
    while (i < 5)
    {
        printf("i before = %d\n", i);
        i++;
        printf("i after = %d\n", i);
    }

    i = 10;
    while (i++ < 5)
        printf("Hi\n"); // cannot enter

    // common mistake
    i = 0;
    while (i < 3) // 여러줄이면 { } 필수
    {
        printf("%i\n", i);
        i++; // indenting
    }
    */

    while (scanf("%d", &i) == 1)
        ; // null statement

    return 0;
}