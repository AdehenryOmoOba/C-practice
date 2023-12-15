#include <stdio.h>

int main()
{
    int multiplier;
    printf("Which multiplication table do you want?: ");
    scanf("%d", &multiplier);

    for (int i = 1; i <= 12; i++)
    {
        int product = multiplier * i;
        printf("%d * %d = %d\n", multiplier, i, product);
    }

    return 0;
}