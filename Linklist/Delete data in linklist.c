#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
int main()
{
    int n;
    printf("Total Node of linklist: ");
    scanf("%d",&n);
    struct node *current,*previous,*head;

    for(int i=0;i<n;i++)
    {
        current=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&current->data);
        if(i==0)
        {
            head=current;
        }
        else
        {
            previous->link=current;
        }
        previous=current;
    }
    current->link=NULL;

    //delete element of Linklist
    int x;
    printf("Enter the position: ");
    scanf("%d",&x);

    if(x==1)
    {
        head=head->link;
    }
    else
    {
        struct node *p1=head;
        for(int i=0;i<x-2;i++)
        {
            p1=p1->link;
        }
        if(x==n)
        {
            p1->link=NULL;
        }
        else
        {
            p1->link=p1->link->link;
        }
    }



    struct node *p=head;
    while(p!=NULL)
    {
        printf("%d\n",p->data);
        p=p->link;
    }


    return 0;
}

