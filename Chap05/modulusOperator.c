#include <stdio.h>

int main()
{
    // 시, 분, 초 예제
    /* 
    int sec, mins, hours;
    printf("Input seconds : ");
    scanf("%d", &sec);
    while (sec >= 0)
    {
        hours = sec / 3600;
        mins = (sec % 3600) / 60;
        sec %= 60;
        printf("%d hours, %d minutes, %d seconds\n", hours, mins, sec);
        printf("Input seconds : ");
        scanf("%d", &sec);
    }
    printf("Good bye !\n");
    */

    // div, mod
    int div, mod;
    div = 11 / 5;
    mod = 11 % 5;
    printf("div = %d, mod = %d\n", div, mod);

    div = 11 / -5;
    mod = 11 % -5;
    printf("div = %d, mod = %d\n", div, mod);

    div = -11 / -5;
    mod = -11 % -5; // first operand is negative
    printf("div = %d, mod = %d\n", div, mod);

    div = -11 / 5;
    mod = -11 % 5; // first operand is negative
    printf("div = %d, mod = %d\n", div, mod);

    /* 결과
        div = 2, mod = 1
        div = -2, mod = 1
        div = 2, mod = -1
        div = -2, mod = -1
    */

    return 0;
}
