#include <stdio.h>

int CheckIfNumberIsOdd(size_t number)
{
    return number % 2;
}

void PrintNOfSameChar(char character, size_t times)
{
    while (times-- != 0)
    {
        printf("%c", character);
    }
}

int PrintDiamond(size_t max)
{
    size_t line = 1;

    if (!CheckIfNumberIsOdd(max))
    {
        return 1;
    }

    while (line <= max / 2)
    {
        PrintNOfSameChar(' ', max / 2 - line + 1);
        PrintNOfSameChar('*', line * 2 - 1);
        printf("\n");
        line++;
    }

    PrintNOfSameChar('*', max);
    printf("\n");
    line++;

    while (line <= max)
    {
        PrintNOfSameChar(' ', max / 2 - max + line);
        PrintNOfSameChar('*', (max - line + 1) * 2 - 1);
        printf("\n");
        line++;
    }

    return 0;
}

int main()
{
    int result;
    size_t input;

    printf("Enter odd positive integer for print diamond: ");
    scanf_s("%u", &input);

    result = PrintDiamond(input);

    if (result == 1)
    {
        printf("You must enter odd positive integer!\n");
    }

    return 0;
}