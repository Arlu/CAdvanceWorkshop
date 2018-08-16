#include <stdio.h>

size_t Fibonacci(size_t n)
{
    size_t result = 1, last = 1;

    for (size_t i = 3; i <= n; i++)
    {
        size_t temp = result;
        result += last;
        last = temp;
    }

    return result;
}
// 1 1 2 3 5 8 13 21 34 55 89

void main()
{
    size_t input;

    printf("Enter n: ");
    scanf_s("%u", &input);

    printf("The %uth fibonacci number is %u\n", input, Fibonacci(input));
}