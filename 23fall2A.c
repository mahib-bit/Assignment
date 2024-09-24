#include<stdio.h>
#include<stdlib.h>

struct node
{
    int a;
    float b;
    struct node *p,*q; 
};

typedef struct node j;

int main()
{
    struct node *ptr1,*ptr2,*ptr3;
    ptr1=(j*)malloc(sizeof(j));
    ptr3=(j*)malloc(sizeof(j));
    ptr2=(j*)malloc(sizeof(j));
    
ptr1->a=11;
ptr1->b=1.5;
ptr1->p=ptr3;
ptr2->a=13;
ptr2->b=1.3;
ptr2->q=NULL;
ptr3->a=15;
ptr3->b=1.1;
ptr3->p=NULL;
ptr3->q=ptr2->p;

printf("%d-> %.1f\n",ptr1->a,ptr1->b);
printf("%d-> %.1f\n",ptr2->a,ptr2->b);
printf("%d-> %.1f\n",ptr3->a,ptr3->b);

}