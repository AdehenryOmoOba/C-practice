#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

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
        printf("File path is invalid, a new file named '%s' has been created in current directory\n", filePath);
    }
    else
    {
        printf("✅ File path '%s' is found\n", filePath);
    }

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

void readFile()
{
    char filePath[200];

    printf("Enter file path: ");

    fgets(filePath, sizeof(filePath), stdin);

    // Remove the '\n' by replacing it with '\0'
    int strLengtth = strlen(filePath);
    if (strLengtth > 0 && filePath[strLengtth - 1] == '\n')
    {
        filePath[strLengtth - 1] = '\0';
    }

    FILE *filePtr = fopen(filePath, "r");

    char xter;

    if (!filePtr)
    {
        printf("File path is invalid\n");
        exit(1);
    }

    while ((xter = fgetc(filePtr)) != EOF)
    {
        printf("%c", xter);
    }

    fclose(filePtr);
}

void countFileLines()
{

    char filePath[200];

    printf("Enter file path: ");

    fgets(filePath, sizeof(filePath), stdin);

    // Remove the '\n' by replacing it with '\0'
    int strLengtth = strlen(filePath);
    if (strLengtth > 0 && filePath[strLengtth - 1] == '\n')
    {
        filePath[strLengtth - 1] = '\0';
    }

    FILE *filePtr = fopen(filePath, "r");

    if (filePtr == NULL)
    {
        printf("🚫 File not found\n");
        exit(1);
    }

    char xter;
    int lines = 1;

    while ((xter = fgetc(filePtr)) != EOF)
    {

        if (xter == '\n')
        {
            lines++;
        }
    }
    printf("%d\n", lines);
    fclose(filePtr);
}

void copyFile()
{

    char sourceFilePath[200];
    char destinationFilePath[200];

    printf("Enter source file path: ");

    fgets(sourceFilePath, sizeof(sourceFilePath), stdin);

    // Remove the '\n' by replacing it with '\0'
    int strLengtth = strlen(sourceFilePath);
    if (strLengtth > 0 && sourceFilePath[strLengtth - 1] == '\n')
    {
        sourceFilePath[strLengtth - 1] = '\0';
    }

    FILE *sourceFilePtr = fopen(sourceFilePath, "r");

    char xter;

    if (!sourceFilePtr)
    {
        printf("File path is invalid\n");
        exit(1);
    }

    printf("Enter destination file path: ");

    fgets(destinationFilePath, sizeof(destinationFilePath), stdin);

    FILE *destinationFilePtr = fopen(destinationFilePath, "w");

    while ((xter = fgetc(sourceFilePtr)) != EOF)
    {
        fputc(xter, destinationFilePtr);
    }

    fclose(sourceFilePtr);
    fclose(destinationFilePtr);
}

int main()
{
    // appendToFile();
    // readFile();
    // countFileLines();
    // copyFile();
}
