#include <stdio.h>
#include <ctype.h>

int main()
{
    char input;

    do
    {
        input = getchar();
        putchar(input);
    } while (tolower(input) != 'q');

    return 0;
}