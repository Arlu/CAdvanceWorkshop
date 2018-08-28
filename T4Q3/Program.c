#include <stdio.h>
#include <string.h>

void main(size_t argc, char *argv[])
{
    for (size_t index = 0; index < argc; index++)
    {
        printf("Parameter #%u: %s\n", index, argv[index]);
    }
}