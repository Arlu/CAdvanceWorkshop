#include <stdio.h>

/**
 * Check if the number is odd.
 *
 * @return if the number is odd.
 */
int CheckIfNumberIsOdd(size_t number)
{
    return number % 2;
}

/**
* Print selected char n times.
*
* @param character selected char.
* @param times how many time to selected char.
*/
void PrintNOfSameChar(char character, size_t times)
{
    while (times-- != 0)
    {
        printf("%c", character);
    }
}

/**
* Print diamond.
*
* @param max diamond size by center line wide.
*/
int PrintDiamond(size_t max)
{
    size_t line = 1;

    if (!CheckIfNumberIsOdd(max))
    {
        return 1;
    }

    /* Print before center line. */
    while (line <= max / 2)
    {
        PrintNOfSameChar(' ', max / 2 - line + 1);
        PrintNOfSameChar('*', line * 2 - 1);
        printf("\n");
        line++;
    }

    /* Print center line. */
    PrintNOfSameChar('*', max);
    printf("\n");
    line++;

    /* Print after center line. */
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