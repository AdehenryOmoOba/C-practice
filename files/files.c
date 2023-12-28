#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void readFile(char *filePath)
{
    FILE *filePtr = fopen(filePath, "r");

    // char xter;
    char text[100];

    if (!filePtr)
    {
        printf("File path is invalid\n");
        exit(1);
    }

    while (!feof(filePtr))
    {
        // xter = fgetc(filePtr);
        // printf("%c", xter);

        fgets(text, 10, filePtr);
        printf("%s", text);
    }
    printf("\n");

    fclose(filePtr);
}

void appendToFile()
{
    int addText = 1;

    char text[200];

    FILE *filePtr;

    char filePath[100];

    printf("Enter file path: ");

    fgets(filePath, sizeof(filePath), stdin);

    int len = strlen(filePath);

    if (len > 0 && filePath[len - 1] == '\n')
    {
        // Replace '\n' with '\0'
        filePath[len - 1] = '\0';
    }

    if (access(filePath, F_OK) != 0)
    {
        printf("File path is invalid, try again\n");
        exit(1);
    }

    printf("✅ File path '%s' is found\n", filePath);

    filePtr = fopen(filePath, "a");

    while (1)
    {

        printf("Enter 1 to add more text to file or 0 to quit: ");
        scanf("%d", &addText);
        getchar();

        if (addText != 1)
        {
            break;
        }

        printf("Enter text: ");
        fgets(text, 100, stdin);
        fputs(text, filePtr);

        addText = 0;
    }

    fclose(filePtr);
}

int main()
{
    readFile("try.txt");
    // appendToFile();
}
