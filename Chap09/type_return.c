#include <stdio.h>

int int_min(int, int);

int main()
{
    int i1, i2;

    while (1)
    {
        printf("Input two integers : ");
        if (scanf("%d %d", &i1, &i2) != 2)
            break;

        int lesser = int_min(i1, i2);
        // int lesser = min;
        printf("The lesser of %d and %d is %d\n", i1, i2, lesser);
        // printf("The lesser of %d and %d is %d\n", i1, i2, int_min(i1, i2));
    }

    printf("End.\n");
}

int int_min(int i, int j)
// int_min(int i, int j) // int 반환 자료형은 생략 가능, but 생략 안하는 것을 권장
{
    /*
    int min; // local variable (지역변수)

    if (i < j)
        min = i;
    else
        min = j;
    return min;
    */

    return (i < j) ? i : j;

    /*
    if (i < j)
        return i;
    else
        return j;
    printf("WHO?"); // 실행 되지 않는다.
    */
    // return; // return with no value
}