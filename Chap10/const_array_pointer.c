#include <stdio.h>

int main()
{
    // type qualifiers : const, volatile, ...
    const double PI = 3.14159;
    // PI = 2.14159; // const는 변경 불가

    const int arr[5] = {1, 2, 3, 4, 5};
    // arr[1] = 123;

    const double arr2[3] = {1.0, 2.0, 3.0};
    // arr2[0] = 100.0;

    const double *const pd = arr2; // arr2
    // *pd = 3.0;               // pd[0] = 3.0; arr2[0] = 3.0; // 동일
    // pd[2] = 1024.0;          // arr2[2] = 1024.0;

    printf("%f %f", pd[2], arr2[2]);

    // pd++; // allowed // 막으려면 pd의 왼쪽에도 const를 추가
    printf("%f %f", pd[2], arr2[2]);

    return 0;
}