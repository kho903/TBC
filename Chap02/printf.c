/*
 * Written by Kim Ji Hun
 */
#include <stdio.h>

int main()
{
    printf("\"The truth is ... \nI am IronMan.\"\n");
    // \n : escape sequence

    // print formatted
    int x, y, z;
    x = 1;
    y = 2;
    z = x + y;
    printf("The answer is %i!\n", z);
    printf("%d + %d = %d", x, y, z);
    printf("\a"); // 경고음 출력
    /*
        블록 주석 입니다.
    */
    // 한 줄 주석 입니다.
    return 0;
}