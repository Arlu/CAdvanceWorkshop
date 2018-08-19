#include <stdio.h>
#include <string.h>

void PrintReverseSentence(char str[])
{
    char *word = strtok(str, " ");

    if (word != NULL)
    {
        PrintReverseSentence(NULL);
        printf("%s ", word);
    }
}

void main()
{
    char input[100];

    printf("Enter some string:\n");
    fgets(&input, 100, stdin);
    input[strlen(input) - 1] = '\0';

    printf("The reverse sentence:\n");
    PrintReverseSentence(input);
    printf("\n");
}