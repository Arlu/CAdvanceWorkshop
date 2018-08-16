#include <stdio.h>

int SumArray(int arr[], size_t length)
{
    int result = 0;

    for (size_t i = 0; i < length; i++)
    {
        result += arr[i];
    }

    return result;
}

void Sort(int arr[], size_t length)
{
    size_t smallest;

    for (size_t i = 0; i < length; i++)
    {
        smallest = i;

        for (size_t j = i + 1; j < length; j++)
        {
            if (arr[smallest] > arr[j])
            {
                smallest = j;
            }
        }

        /* Swap */
        int temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;
    }
}

void PrintArray(int arr[], size_t length)
{
    for (size_t i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main()
{
    int myArray[] = { 4, 3, 2, 7, 5, 6, 9 };
    size_t arraySize = sizeof(myArray) / sizeof(int);

    printf("Sum = %d\n", SumArray(myArray, arraySize));

    Sort(myArray, arraySize);

    PrintArray(myArray, arraySize);

    return 0;
}