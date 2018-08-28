#include <stdio.h>
#include <stdlib.h>

typedef int ListDataType;

typedef struct Node_t {
    ListDataType value;
    Node *next;
} Node;

typedef struct List_t
{
    Node *head;
} List;

List *CreateList()
{
    List *list = malloc(sizeof(List));
    list->head = NULL;

    return list;
}

void FreeList(List *list)
{
    Node *current = list->head;

    while (current)
    {
        Node *temp = current;
        current = current->next;

        free(current);
    }

    free(list);
}

size_t GetListSize(List *list)
{
    Node *current = list->head;
    size_t result = 0;

    while (current)
    {
        Node *temp = current;
        current = current->next;

        result++;
    }

    return result;
}

Node *GetListHead(List *list)
{
    return list->head;
}

Node *GetNextNode(Node *currentNode)
{
    return currentNode->next;
}

void main()
{
}