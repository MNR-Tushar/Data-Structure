#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
typedef struct node node;
int main()
{
    node *current, *first, *previous;

    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        current=malloc(sizeof(node));

        scanf("%d",&current->data);

        if(i==0)first=current;
        else{
            previous->link=current;
        }
        previous=current;
    }

    current->link=NULL;

    int x,y;
    printf("Enter the position and the data: ");
    scanf("%d %d",&x,&y);

    node *new_node,*n1,*p;

    p=first;

    for(int i=0;i<x-2;i++)p=p->link;

    new_node=malloc(sizeof(node));

    n1=p->link;

    new_node->data=y;

    p->link=new_node;
    new_node->link=n1;


    node *p1=first;

    while(p1!=NULL)
    {
        printf("%d\n",p1->data);
        p1=p1->link;
    }
}
