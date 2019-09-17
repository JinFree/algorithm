#include <stdio.h>
#include <stdlib.h>
/*
struct Node 
{
    int Data;
    struct Node* NextNode;
}; // struct Node MyNode;
*/

typedef struct tagNode 
{
    int Data;
    struct tagNode* NextNode;
} Node; // Node MyNode;

Node* SingleLinkedList_CreateNode(int NewData)
{
    Node* NewNode = (Node*)malloc(sizeof(Node));
    NewNode -> Data = NewData;
    NewNode -> NextNode = NULL;
    return NewNode;
}

void SingleLinkedList_DestroyNode(Node* Node)
{
    free(Node);
}



