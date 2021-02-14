#include <stdio.h>

int main()
{
    /*
    int a = 0;
    // postfix 후위 연산자
    a++; // a = a + 1 or a += 1;
    printf("%d\n", a);

    // prefix 전위 연산자
    ++a; // a = a + 1 or a += 1;
    printf("%d\n", a);
    */

    /*
    double b = 0;
    b++;
    printf("%f\n", b);

    ++b;
    printf("%f\n", b);
    */

    int count = 0;

    /*
    while (count < 10)
    {
        printf("%d ", count);
        // count = count + 1;
        // count += 1;
        // count++; // 현재 상태에선 count++ , ++count 같음
        ++count;
    }
    */
    // while (++count < 10) // 1 2 3 4 5 6 7 8 9
    // while (count++ < 10) // 1 2 3 4 5 6 7 8 9 10
    // {
    //     printf("%d ", count);
    // }

    // while (count < 10)
    // {
    //     printf("%d ", ++count); // 1 2 3 4 5 6 7 8 9 10
    //     printf("%d ", count++); // 0 1 2 3 4 5 6 7 8 9
    // }

    /*
    int i = 1, j = 1;
    int i_post, pre_j;

    i_post = i++;
    pre_j = ++j;

    printf("%d %d\n", i, j);          // 2 2
    printf("%d %d\n", i_post, pre_j); // 1 2
    */

    /*
    int i = 3;
    int l = 2 * --i;
    printf("%d %d\n", i, l); // 2 4

    i = 1;
    l = 2 * i--;
    printf("%d %d\n", i, l); // 0 2
    */

    // very high precedence
    /*
    int x, y, z;
    x = 3, y = 4;
    z = (x + y++) * 5;
    printf("%d %d %d", x, y, z);
    */

    // ++ and -- affect modifiable lvalues
    /*
    int x = 1, y = 1, z;
    z = x * y++;
    // z = (x * y)++; //error
    // z = 3++; //error
    */

    // Bad Practices
    int n = 1;
    printf("%d %d", n, n * n++);
    int x = n / 2 + 5 * (1 + n++);
    int y = n++ + n++;

    return 0;
}