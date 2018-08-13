#include <stdio.h>

size_t strlen(const char *str)
{
    size_t result = 0;
    const char *current = str;

    while (*current++ != '\0')
    {
        result++;
    }

    return result;
}

int main()
{
    char myString[100];

    printf("Enter some string (up to 100):\n");
    fgets(myString, 100, stdin);

    printf("The lenght of the string is %zu\n", strlen(myString));

    return 0;
}