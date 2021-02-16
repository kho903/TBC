#include <stdio.h>

void draw(int n); // ANSI function prototype declaration

int main()
{
    int i = 5;
    char c = '#'; // 35
    float f = 7.1f;

    draw(i);
    // draw(c);
    draw((int)c);
    // draw(f);
    draw((int)f);

    /* Arguments vs. Parameters */
    // actual argument, actual parameter -> argument (values)
    // formal argument, formal parameter -> parameter (variables)

    return 0;
}

void draw(int n)
{
    // for (int i = 0; i < n; i++)
    //     printf("*");
    while (n-- > 0)
        printf("*");

    printf("\n");
}