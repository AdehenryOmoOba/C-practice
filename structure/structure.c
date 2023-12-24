#include <stdio.h>
// #pragma pack(1)

int main()
{
    // Struct is a user defined data type:
    struct student
    {
        char initial;
        int age;
        float height;
        char fname[30];
    };

    // Initializing struct object;
    // struct student studentData = {'H', 35, 5.90, "Adehenry"};

    // Initializing Array of struct objects;
    struct student studentData[3] = {
        {'A', 23, 2.90, "Adehenry"},
        {'H', 35, 1.60, "Foo"},
        {'H', 17, 6.750, "Bar"},
    };

    printf("Adehenry's initial: %c\n", studentData[2].initial);
    printf("Adehenry's age: %d\n", studentData[2].age);
    printf("Adehenry's height: %.2f\n", studentData[2].height);
    printf("Adehenry's first name: %s\n", studentData[2].fname);
}