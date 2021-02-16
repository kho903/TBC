#include <stdio.h>

int main()
{
    // for (int i = 0; i < 5; i++)
    // {
    //     for (char c = 'A'; c <= 'K'; c++)
    //         printf("%c ", c);
    //     printf("\n");
    // }

    // for (int i = 0; i < 10; i++)
    // {
    //     for (char c = 'A'; c <= 'A' + i; c++)
    //         printf("%c ", c);
    //     printf("\n");
    // }

    for (int i = 0; i < 12; i++)
    {
        for (char c = 'A' + i; c < 'A' + 12; c++)
            printf("%c ", c);
        printf("\n");
    }

    return 0;
}