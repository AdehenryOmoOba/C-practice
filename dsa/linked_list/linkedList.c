#include <stdio.h>

// Create node struct:
struct node
{
    int data;
    struct node *next;
};

struct node *insertNode(struct node *headPtr, int data)
{
    printf("Data: %d\n", data);
    printf("Value stored in Address of head pointer: %p\n", headPtr);

    if (!headPtr)
    {
        struct node head = {data, headPtr};
        headPtr = &head;

        return headPtr;
    }
    else
    {
        struct node *newNodePtr = NULL;
        struct node newNode = {data, newNodePtr};

        struct node *current = headPtr;

        while (current->next)
        {
            current = current->next;
        }

        current->next = &newNode;

        return headPtr;
    }
}

int traverseNode(struct node *head)
{
    return 1;
}

int main()
{
    struct node *headPtr = NULL;
    headPtr = insertNode(headPtr, 0);
    headPtr = insertNode(headPtr, 1);
    headPtr = insertNode(headPtr, 2);
    headPtr = insertNode(headPtr, 3);

    return 0;
}