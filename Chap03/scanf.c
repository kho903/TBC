// #define _CRT_SECURE_NO_WARNING
// visual studio 에서 scanf() 쓰려면 포함시켜야함
// vsc (gcc) 에서는 없어도 컴파일 가능

#include <stdio.h>

int main()
{
    int i = 0;

    scanf("%d", &i); // & : ampersand : 주소를 넘겨주는 것
    printf("Value is %d\n", i);
    return 0;
}