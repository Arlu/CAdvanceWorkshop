#include <stdio.h>
#include <stdlib.h>

void main()
{
    size_t n, *numbers;

    printf("Enter how many numbers you want to enter: ");
    scanf_s("%u", &n);

    numbers = (size_t*)malloc(n * sizeof(size_t));

    printf("Enter %u numbers:\n", n);
    for (size_t i = 0; i < n; i++)
    {
        printf("Enter #%u: ", i);
        scanf_s("%u", &numbers[i]);
    }

    printf("Numbers in reverse:\n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%u ", numbers[i]);
    }
    printf("\n");
}