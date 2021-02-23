#include <stdio.h>

int all; // 전역 변수

int int_max(int i, int j);

int int_max(int i, int j)
{
    // a = 456; // 지역변수
    all = 1; // 전역변수
    int m;
    m = i > j ? i : j;
    return m;
}

int main()
{
    // m = 123; // 지역변수
    all = 2; // 전역변수
    int a;

    a = int_max(1, 2);
    printf("%d\n", a);
    printf("%p\n", &a); // a주소

    {
        int a; // 주소가 다른 변수가 됨
        a = int_max(4, 5);

        printf("%d\n", a);
        printf("%p\n", &a); // b주소

        int b = 123;
    }

    // b = 456; // 오류

    printf("%d\n", a);
    printf("%p\n", &a); // a주소

    return 0;
}