#include <stdio.h>
#include <stdlib.h>
struct node
{
    char al;
    struct node *next, *prev;
};
typedef struct node node;
int main()
{   
    node *n1,*n2,*n3,*n4;
    n1=(node*)malloc(sizeof(node));
    n2=(node*)malloc(sizeof(node));
    n3=(node*)malloc(sizeof(node));
    n4=(node*)malloc(sizeof(node));
    n1->prev=0;
    n1->al='A';
    n1->next=n2;

    n2->prev=n1;
    n2->al='B';
    n2->next=n3;

    n3->prev=n2;
    n3->al='C';
    n3->next=n4;

    n4->prev=n3;
    n4->al='D';
    n4->next=0;
    printf("%c %c %c %c",n1->al,n2->al,n3->al,n4->al);
}