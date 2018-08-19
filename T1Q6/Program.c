#include <stdio.h>

/**
* Return number of digits in the number.
*
* @param number the number.
* @return number of digits in the number.
*/
size_t NumberLength(size_t number)
{
    size_t result = 0;

    if (number == 0)
    {
        return 1; /* Zero number has one digit. */
    }

    while (number)
    {
        result++;
        number /= 10;
    }

    return result;
}

/**
* Return result of the algorithm for calculate valid israeli id.
*
* @param id id.
* @return number of digits in the number.
*/
size_t CalculateCheckDigit(size_t id)
{
    size_t result = 0;

    if (NumberLength(id) != 9)
    {
        return 0; /* Id must have exast 9 digits. */
    }

    size_t factor = 1;

    while (id)
    {
        size_t temp = id % 10;
        id /= 10;

        temp *= factor;
        factor = factor % 2 + 1;

        if (temp >= 10)
        {
            temp -= 9;
        }

        result += temp;
    }

    return result;
}

/**
* Check if the israeli id is valid.
*
* @param id id.
* @return it it is valid.
*/
int ValidateID(size_t id)
{
    return CalculateCheckDigit(id) % 10 == 0;
}

/**
* Get check digit for the israeli id without check digit.
*
* @param id id.
* @return check digit.
*/
size_t GetCheckDigitOfId(size_t idWithoutCheckDigit)
{
    for (size_t result = 0; result <= 9; result++)
    {
        if (ValidateID(idWithoutCheckDigit * 10 + result))
        {
            return result;
        }
    }

    return 0;
}

int main()
{
    size_t id;

    printf("Enter id without check digit: ");
    scanf_s("%u", &id);

    if (NumberLength(id) == 8)
    {
        printf("The check digit is %u\n", GetCheckDigitOfId(id));
    }
    else
    {
        printf("Israeli id without check digit must have 8 numbers!\n");
    }

    return 0;
}