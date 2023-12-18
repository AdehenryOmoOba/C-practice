#include <stdio.h>

int main()
{
    int age = 27;

    int *agePtr = &age;

    int **agePtrPtr = &agePtr;

    int ***agePtrPtrPtr = &agePtrPtr;

    printf("Age value is:                %d\n", age);
    printf("Age mem address is:          %p\n", &age);

    printf("agePtr value is:             %p\n", agePtr);
    printf("agePtr mem address is:       %p\n", &agePtr);

    printf("agePtrPtr value is:          %p\n", agePtrPtr);
    printf("agePtrPtr mem address is:    %p\n", &agePtrPtr);

    printf("agePtrPtrPtr value is:       %p\n", agePtrPtrPtr);
    printf("agePtrPtrPtr mem address is: %p\n", &agePtrPtrPtr);

    printf("\n");

    printf("access 'age' value via variable 'age':         %d\n", age);
    printf("access 'age' value via pointer 'agePtr':       %d\n", *agePtr);
    printf("access 'age' value via pointer 'agePtrPtr':    %d\n", **agePtrPtr);
    printf("access 'age' value via pointer 'agePtrPtrPtr': %d\n", ***agePtrPtrPtr);
}