#include <stdio.h>
#include <string.h>

void ReverseString(char str[], size_t length)
{
    for (size_t i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

void main()
{
    char input[100];

    printf("Enter some string:\n");
    fgets(&input, 100, stdin);

    ReverseString(input, strlen(input));

    printf("The reverse string:%s\n", input);
}