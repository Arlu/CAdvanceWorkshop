#include <stdio.h>

int main()
{
    const int VAL = 2;
    int *p = &VAL;
    *p *= 2;

    printf("%d\n", VAL);

    return 0;
}