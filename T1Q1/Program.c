#include <stdio.h>
#include <ctype.h>

/**
 * Input letters from user and print they up to input 'q' or 'Q'.
 */
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