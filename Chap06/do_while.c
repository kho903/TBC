#include <stdio.h>

int main()
{
    const int secret_code = 123;
    int input_code;
    do // while 문을 쓰면 do 안의 내용을 한번 더 써주어야 함
    {
        printf("Enter secret code : ");
        scanf("%d", &input_code);
    } while (secret_code != input_code);
    printf("GOOD!");
    return 0;
}