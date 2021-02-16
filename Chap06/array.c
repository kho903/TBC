#include <stdio.h>

#define NUM_DAYS 365

int main()
{
    // char my_chars[] = "Hello, World!";

    // int daily_temperature[NUM_DAYS];
    // double stock_prices_history[NUM_DAYS];

    // printf("%zd\n", sizeof(stock_prices_history));    // 2920 (8 * 365)
    // printf("%zd\n", sizeof(double) * NUM_DAYS);       // 2920 (8 * 365)
    // printf("%zd\n", sizeof(stock_prices_history[0])); // 8 (double의 사이즈)

    int my_numbers[5];
    // // scanf("%d", &my_numbers[0]);
    // scanf("%d", my_numbers); // 첫번째 0 index : 주소

    // my_numbers[0] = 1; // subscripts, indices, offsets
    // my_numbers[1] = 3;
    // my_numbers[2] = 4;
    // my_numbers[3] = 2;
    // my_numbers[4] = 1024;
    /* Runtime Error */
    // my_numbers[5] = 123; // out of bound

    // my_numbers = 7; // compile error
    // printf("%d\n", my_numbers[5]); // out of bound

    return 0;
}