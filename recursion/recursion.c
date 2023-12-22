#include <stdio.h>

int factoria(int number)
{
    if (number <= 1)
    {
        return 1;
    }

    return number * factoria(number - 1);
}

void keePrinting()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 1)
    {
        return;
    }
    keePrinting();
}

int main()
{
    // Declare and iterate array of strings:
    // char names[][10] = {"foo", "bar", "yinggg", "zoo"};

    // int arrayLength = sizeof(names) / sizeof(names[0]);

    // printf("Array length: %d\n", arrayLength);

    // for (int i = 0; i < arrayLength; i++)
    // {
    //     printf("> %s\n", names[i]);
    // }

    // Recursion
    // int num;

    // printf("Enter a number: ");
    // scanf("%d", &num);

    // int result = factoria(num);

    // printf("Factorial of %d is %d\n", num, result);

    keePrinting();
}