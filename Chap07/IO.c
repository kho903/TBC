#include <stdio.h>

int main()
{
    char ch;
    // ch = getchar();
    // putchar(ch);

    // while (ch != '\n') // Use '\n' to find the end of a sentense
    while ((ch = getchar()) != '\n')
    {
        if (ch >= 'a' && ch <= 'z')
            ch -= 32;

        else if (ch >= 'A' && ch <= 'Z')
            ch += 32;

        // for (int i = '0'; i <= '9'; ++i)
        //     if (ch == i)
        //         ch = '*';
        // if (ch >= '0' && ch <= '9')
        //     ch = '*';

        // if (ch == 'f' || ch == 'F')
        //     ch = 'X';
        putchar(ch);
        // ch = getchar();
    }

    putchar(ch);
    return 0;
}