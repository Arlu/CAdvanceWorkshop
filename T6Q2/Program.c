#include <stdio.h>
#include <stdlib.h>

void PrintHex(void *val, size_t size)
{
    char *cVal = (char*)val;

    for (size_t i = 0; i < size; i++)
    {
        printf("%x", cVal[i]);
    }
    printf("\n");
}

void main()
{
    char a = 'a';
    int b = 0x11223344;

    PrintHex(&a, sizeof(a));
    PrintHex(&b, sizeof(b));
}