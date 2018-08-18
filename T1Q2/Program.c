#include <stdio.h>
#include <ctype.h>

/**
 * Input letters from user and print they at capital letters up to input 'q' or 'Q'.
 */
int main()
{
    char input;

    do
    {
        input = getchar();
        putchar(toupper(input));
    } while (tolower(input) != 'q');

    return 0;
}