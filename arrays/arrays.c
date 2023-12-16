#include <stdio.h>
#include <string.h>

// Pointers are derived data types.
// Pointers are a special type of variables and they always point to the base memory address of other variables

char *convert_to_lower(char *name)
{

    for (int i = 0; name[i] != '\0'; i++)

    {

        if (name[i] >= 65 && name[i] <= 90)
            name[i] = name[i] + 32;
    }

    return name;
}

int main()
{
    // Looping over strings:

    // char my_string[] = "abc";

    // printf("My string: %s\n", my_string);

    // for (int i = 0; i < sizeof(my_string); i++)
    // {

    //     printf("%c\n", my_string[i]);
    // }

    // Looping over array of integers:

    // int my_numbers[] = {2, 4, 6, 8};

    // int my_numbers_array_length = sizeof(my_numbers) / sizeof(int);

    // int sum = 0;

    // for (int i = 0; i < my_numbers_array_length; i++)
    // {
    //     printf("%d\n", my_numbers[i]);

    //     sum += my_numbers[i];
    // }

    // printf("Sum of my_numbers: %d\n", sum);

    char fname[30] = "AdehenryYY";
    char lname[10];

    // printf("Enter your first name (maximum of 9 characters): ");

    // fgets(fname, 10, stdin);

    // printf("Enter your last name (maximum of 9 characters): ");

    // fgets(lname, 10, stdin);

    // strcat(fname, lname);

    // int fname_length = strlen(fname);
    // int lname_length = strlen(lname);

    // printf("length of fname: %d\n", fname_length);
    // printf("length of lname: %d\n", lname_length);

    // for (int i = 0; i < lname_length - 1; i++)
    // {

    //     fname[fname_length + i] = lname[i];
    // }

    // printf("Your full name is: %s\n", strcat(fname, lname));

    // printf("Length of string: %lu\n", strlen(my_name));

    // for (char i = 0; i < strlen(my_name); i++)
    // {
    //     printf("%c\n", my_name[i]);
    // }

    // Converting chatacters to lowercase: If the ASCII value of a chatacter is between 65 - 90, Add 32

    // printf("%c\n", 122);

    char *result = convert_to_lower(fname);

    printf("%s\n", result);

    return 0;
}