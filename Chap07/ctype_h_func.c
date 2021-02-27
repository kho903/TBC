#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    // ch = getchar();
    // putchar(ch);

    // while (ch != '\n') // Use '\n' to find the end of a sentense
    while ((ch = getchar()) != '\n')
    {
        if (islower(ch))
            ch = toupper(ch);

        else if (isupper(ch))
            ch = tolower(ch);

        // for (int i = '0'; i <= '9'; ++i)
        //     if (ch == i)
        //         ch = '*';
        if (isdigit(ch))
            ch = '*';

        // if (ch == 'f' || ch == 'F')
        //     ch = 'X';
        putchar(ch);
        // ch = getchar();
    }

    putchar(ch);
    return 0;
}