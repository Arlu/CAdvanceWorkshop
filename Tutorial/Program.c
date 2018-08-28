#include <stdio.h>

void main()
{
    int x = 1;
    char *y = &x;
    y++;
    int *z = &y;
}