#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node node;

int main()
{
    node *lst1, *lst2, *lst11, *lst22;
    lst1 = (node *)malloc(sizeof(node));
    lst2 = (node *)malloc(sizeof(node));
    lst11 = (node *)malloc(sizeof(node));
    lst22 = (node *)malloc(sizeof(node));

    lst1->data = 3;
    lst1->next = lst11;

    lst11->data = 5;
    lst11->next = lst2;

    lst2->data = 7;
    lst2->next = lst22;

    lst22->data = 9;
    lst22->next = 0;

    printf("%d-> %d-> %d-> %d\n", lst1->data, lst11->data, lst2->data,lst22->data);
    getch();
}
