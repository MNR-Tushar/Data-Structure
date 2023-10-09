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

    for(int i=0; i<n; i++)
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


    //intsert any position;
    int x,val;
    printf("Enter the position & Value: ");
    scanf("%d%d",&x,&val);

    struct node *new1,*n1;
    new1=(struct node* )malloc(sizeof(struct node));
    new1->data=val;

    if(x==1)
    {
        new1->link=head;
        head=new1;
    }
    else
    {

        if(x>n)
        {
            current->link=new1;
            new1->link=NULL;
        }
        else
        {
            struct node *p1=head;
            for(int i=0; i<x-2; i++)
            {
                p1=p1->link;
            }
            n1=p1->link;
            p1->link=new1;
            new1->link=n1;
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

