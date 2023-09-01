#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
int main()
{
    struct node *current, *first, *previous;

    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        current=malloc(sizeof(struct node));

        scanf("%d",&current->data);

        if(i==0)first=current;
        else{
            previous->link=current;
        }
        previous=current;
    }

    current->link=NULL;

    int del;
    printf("Enter the position: ");
    scanf("%d",&del);
    struct node *p1;
    p1=first;

    for(int i=0;i<del-2;i++)p1=p1->link;

    p1->link=p1->link->link;



    struct node *p=first;

    while(p!=NULL)
    {
        printf("%d\n",p->data);
        p=p->link;
    }

    return 0;
}

