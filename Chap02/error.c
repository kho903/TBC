#include <stdio.h>

int main()
{
    int n1, n2, n3, n4;

    // n5 = 3; 문법 오류 - 컴파일러가 잡아줌

    n1 = 1;
    n2 = n1 * n1;
    n3 = n2 * n1;
    n4 = n2 * n1; // 문맥 오류 - 오타로 인해 잡기 힘듦

    return 0;
}