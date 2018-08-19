#include <stdio.h>

/**
 * Input text from user up to 0 and print reverse.
 */
void PrintReverse()
{
    char input;
    scanf_s("%c", &input);

    if (input != '0')
    {
        PrintReverse();
        printf("%c", input);
    }
}

void main()
{
    PrintReverse();
    printf("\n");
}