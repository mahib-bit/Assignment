#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next, *prev;
} *head;
typedef struct node node;

int main()
{
    node *middle, *tail, *newnode;
    head = (node *)malloc(sizeof(node));
    middle = (node *)malloc(sizeof(node));
    tail = (node *)malloc(sizeof(node));

    head->prev = NULL;
    head->data = 7;
    head->next = newnode;

    newnode->prev = head;
    newnode->data = 11;
    newnode->next = middle;

    middle->prev = newnode;
    middle->data = 9;
    middle->next = tail;

    tail->prev = middle;
    tail->data = 11;
    tail->next = 0;

    printf("%d-> %d-> %d-> %d\n", head->data,newnode->data, middle->data, tail->data);
}
