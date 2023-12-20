#include <stdio.h>

static char *joinName(char *, char *);

int main()
{
    // int age = 27;

    // int *agePtr = &age;

    // int **agePtrPtr = &agePtr;

    // int ***agePtrPtrPtr = &agePtrPtr;

    // printf("Age value is:                %d\n", age);
    // printf("Age mem address is:          %p\n", &age);

    // printf("agePtr value is:             %p\n", agePtr);
    // printf("agePtr mem address is:       %p\n", &agePtr);

    // printf("agePtrPtr value is:          %p\n", agePtrPtr);
    // printf("agePtrPtr mem address is:    %p\n", &agePtrPtr);

    // printf("agePtrPtrPtr value is:       %p\n", agePtrPtrPtr);
    // printf("agePtrPtrPtr mem address is: %p\n", &agePtrPtrPtr);

    // printf("\n");

    // printf("access 'age' value via variable 'age':         %d\n", age);
    // printf("access 'age' value via pointer 'agePtr':       %d\n", *agePtr);
    // printf("access 'age' value via pointer 'agePtrPtr':    %d\n", **agePtrPtr);
    // printf("access 'age' value via pointer 'agePtrPtrPtr': %d\n", ***agePtrPtrPtr);

    // Using void pointers:
    // int age = 14;
    // float height = 7.20;
    // char initial = 'z';

    // void *myPointer;

    // myPointer = &age;
    // printf("myPointer used as int pointer: %d\n", *(int *)myPointer);

    // myPointer = &height;
    // printf("myPointer used as float pointer: %.2f\n", *(float *)myPointer);

    // myPointer = &initial;
    // printf("myPointer used as char pointer: %c\n", *(char *)myPointer);

    // Null pointers:
    // int *myPointer = NULL;
    // int *myPointer = 0;

    // Dangling pointers: They are pointers pointing to a memory location that is freed

    char foo[] = "foo";
    char bar[] = "bar";

    char *fullName = joinName(foo, bar);

    printf("Full name before mutation: %s\n", fullName);
    printf("Address inside pointer:    %p\n", fullName);

    fullName[0] = 'Z';

    printf("Full name after mutation: %s\n", fullName);
}

static char *joinName(char *fName, char *lName)
{
    printf("first name: %s\n", fName);
    printf("last name: %s\n", lName);

    static char allNames[] = "Ade Henry";

    printf("Address of string inside pointer: %p\n", allNames);

    return allNames;
}