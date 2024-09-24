#include<stdio.h>
#include<stdlib.h>
struct node{
    int y;
    float x;
    struct node  *p,*q;
};
typedef struct node  node;

int main()
{
     node *head,*tail;
     head=(node*)malloc(sizeof(node));
     tail=(node*)malloc(sizeof(node));
     head->x=1.5;
     head->y=7;
     head->p=tail->p;
     head->q=tail;
     tail->x=2.1;
     tail->y=9;
     tail->q=0;

     printf("%x %x",head->p,tail->p);
}