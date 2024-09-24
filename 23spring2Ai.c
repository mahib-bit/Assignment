#include <stdio.h>
#include <stdlib.h>

struct node
{
    int StudentID;
    float Marks;
    char Section;
    struct node *next;
} *head;
typedef struct node node;
void createlist(int n);
void display();
int main()
{
    createlist(10);
    display();
    return 0;
}
void createlist(n)
{
    node *temp, *newnode;
    head = (node *)malloc(sizeof(node));
    printf("Enter  Student ID, Marks and Section for student no. 1:\n");
    scanf("%d %f %c", &head->StudentID, &head->Marks, &head->Section);
    head->next = 0;
    temp = head;
    newnode = (node *)malloc(sizeof(node));
    for (int i = 2; i <= n; i++)
    {
        printf("Enter  Student ID, Marks and Section for student no. %d:\n", i);
        scanf("%d %f %c", &head->StudentID, &head->Marks, &head->Section);
        newnode->next = NULL;
        temp->next = newnode;
        temp = newnode;
    }
}
void display()
{
    node *temp;
    temp = head;
    while (temp != NULL)
    {
        printf("%d %.2f %c\n", temp->StudentID, temp->Marks, temp->Section);
        temp = temp->next;
    }
}