#include <stdio.h>
#include <stdlib.h>

// Create node struct:
struct node
{
    int data;
    struct node *next;
};

struct node *prependNode(struct node *headPtr, int data)
{
    if (!headPtr)
    {
        struct node *head = (struct node *)malloc(sizeof(struct node));

        if (!head)
        {
            printf("Heap memory allocation failed");
            exit(1);
        }

        head->data = data;
        head->next = NULL;

        headPtr = head;
    }
    else
    {
        struct node *newNodePtr = (struct node *)malloc(sizeof(struct node));
        struct node *temp = headPtr->next;

        headPtr->next = newNodePtr;
        newNodePtr->data = data;
        newNodePtr->next = temp;
    }

    return headPtr;
}

struct node *appendNode(struct node *headPtr, int data)
{
    if (!headPtr)
    {

        struct node *head = (struct node *)malloc(sizeof(struct node));

        if (!head)
        {
            printf("Heap memory allocation failed");
            exit(1);
        }

        head->data = data;
        head->next = NULL;

        headPtr = head;
    }
    else
    {

        struct node *newNodePtr = (struct node *)malloc(sizeof(struct node));

        if (!newNodePtr)
        {
            printf("Heap memory allocation failed");
            exit(1);
        }

        newNodePtr->data = data;
        newNodePtr->next = NULL;

        struct node *current = headPtr;

        while (current->next)
        {
            current = current->next;
        }

        current->next = newNodePtr;
    }
    return headPtr;
}

void traverseNode(struct node *headPtr)
{
    struct node *current = headPtr->next;

    if (!current)
    {
        printf("Linked list is empty.\n");
        exit(1);
    }

    while (current)
    {
        printf("Data: %d\n", current->data);
        current = current->next;
    }
}

void freeMemory(struct node *headPtr)
{
    struct node *current = headPtr;

    while (current)
    {
        struct node *temp = current;
        current = current->next;
        free(temp);
    }

    printf("All memory freed successfuly.\n");
}

int main()
{
    struct node *headPtr = NULL;
    // headPtr = appendNode(headPtr, 0);
    // headPtr = appendNode(headPtr, 1);
    // headPtr = appendNode(headPtr, 2);
    // headPtr = appendNode(headPtr, 3);

    headPtr = prependNode(headPtr, 0);
    headPtr = prependNode(headPtr, 1);
    headPtr = prependNode(headPtr, 2);
    headPtr = prependNode(headPtr, 3);

    traverseNode(headPtr);

    freeMemory(headPtr);

    return 0;
}