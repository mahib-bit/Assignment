#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next, *prev;
};
typedef struct node node;
int main()
{
    node *head, *middle, *tail;
    head = (node *)malloc(sizeof(node));
    middle = (node *)malloc(sizeof(node));
    tail = (node *)malloc(sizeof(node));

    head->prev = NULL;
    head->data = 7;
    head->next = middle->prev;

    middle->prev = head;
    middle->data = 9;
    middle->next = tail;

    tail->prev = middle;
    tail->data = 11;
    tail->next = 0;

    printf("%d-> %d-> %d\n", head->data, middle->data, tail->data);

}
