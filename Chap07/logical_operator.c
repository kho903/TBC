#include <stdio.h>
#include <ctype.h> // islower()
#include <stdbool.h>
#include <iso646.h> // and, or, not

#define PERIOD '.'

int main()
{
    /*
        Logical operators

        && : and
        || : or
        |  : not
    */

    /*
    bool test1 = 3 > 2 || 5 > 6; // true
    bool test2 = 3 > 2 && 5 > 6; // false
    bool test3 = !(5 > 6);       // true, equivalent to 5 <= 6

    printf("%d %d %d\n", test1, test2, test3); // 1 0 1
    */

    // Character counting example
    /*
    char ch;
    int count = 0;

    while ((ch = getchar()) != PERIOD)
    {
        if (ch != '\n' && ch != ' ')
            count++;
    }
    printf("%d", count);
    */

    /*
        Alternatives in iso646.h

        &&  : and
        ||  : or
        !   : not
    */

    /*
    bool test1 = 3 > 2 or 5 > 6;  // true
    bool test2 = 3 > 2 and 5 > 6; // false
    bool test3 = not(5 > 6);      // true, equivalent to 5 <= 6

    printf("%d %d %d\n", test1, test2, test3); // 1 0 1
    */

    /*
        Precedence

        Check !, &&, !! in the operator precedence table
    */

    // int a = 1, b = 2, c = 3, d = 4;
    // a > b &&b > c || b > d;
    // ((a > b) && (b > c)) || (b > d);

    /*
        Short-circuit Evaluation

        - Logical expressions are evaluated from left to right
        - && and || are sequence points
    */

    /*
    int temp = (1 + 2) * (3 + 4);
    printf("Before : %d\n", temp); // 21
    if (temp == 0 && (++temp == 1024))
    {
        // do nothing
        // && 연산자에서 왼쪽 값이 false이면 뒤에 계산 자체를 실행 X
    };
    printf("After : %d\n", temp); // 21
    */

    /*
    int x = 1, y = 2;
    if (x++ > 0 && x + y == 4)
        printf("%d %d\n", x, y); // 2 2
    */

    // Ranges
    /*
    for (int i = 0; i < 100; ++i)
        if (i >= 10 && i <= 20)
            printf("%d ", i);

    printf("\n");

    for (int i = 0; i < 100; ++i)
        if (10 <= i <= 20) // Note : if((10 <= i) <= 20)
            printf("%d ", i);
    */

    for (char c = -128; c < 127; ++c)
        if (c >= 'a' && c <= 'z')
            printf("%c ", c);

    printf("\n");

    for (char c = 0; c < 127; ++c)
        if (islower(c))
            printf("%c ", c);

    return 0;
}