#include <stdio.h>
#include <string.h>

typedef struct Dog_t {
    char name[20];
    size_t weight;
} Dog;

void SortByName(Dog dogs[], size_t length)
{
    size_t smallest;

    for (size_t i = 0; i < length; i++)
    {
        smallest = i;

        for (size_t j = i + 1; j < length; j++)
        {
            if (strcmp(dogs[smallest].name, dogs[j].name) > 0)
            {
                smallest = j;
            }
        }

        /* Swap */
        Dog temp = dogs[i];
        dogs[i] = dogs[smallest];
        dogs[smallest] = temp;
    }
}

void SortByWeight(Dog dogs[], size_t length)
{
    size_t smallest;

    for (size_t i = 0; i < length; i++)
    {
        smallest = i;

        for (size_t j = i + 1; j < length; j++)
        {
            if (dogs[smallest].weight > dogs[j].weight)
            {
                smallest = j;
            }
        }

        /* Swap */
        Dog temp = dogs[i];
        dogs[i] = dogs[smallest];
        dogs[smallest] = temp;
    }
}

void PrintDogs(Dog dogs[], size_t length)
{
    for (size_t i = 0; i < length; i++)
    {
        printf("Dog #%u has name \"%s\" and weigth %u\n", i, dogs[i].name, dogs[i].weight);
    }
}

void main(size_t argc, char *argv[])
{
    Dog dogs[] = {
        { "Kaia", 20 },
        { "Alef", 50 },
        { "Gimel", 15 },
        { "Bet", 75 },
        { "Hamor", 5 }
    };

    size_t length = sizeof(dogs) / sizeof(Dog);

    PrintDogs(dogs, length);

    SortByName(dogs, length);

    printf("\nSorted by names:\n");
    PrintDogs(dogs, length);

    SortByWeight(dogs, length);

    printf("\nSorted by weight:\n");
    PrintDogs(dogs, length);
}