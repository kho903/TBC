#include <stdio.h>

int fibonacci(int number);
int main()
{
    for (int count = 1; count < 13; ++count)
        printf("%d ", fibonacci(count));

    return 0;
}
// 재귀호출
// 장점 : 코드가 간결해짐
// 단점 : 메모리 사용의 비효율성
//        중복 계산

int fibonacci(int number)
{
    if (number <= 2)
        return 1;
    else
        return fibonacci(number - 1) + fibonacci(number - 2);
}