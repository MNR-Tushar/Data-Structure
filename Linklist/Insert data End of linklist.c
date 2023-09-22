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

    node *new_node=malloc(sizeof(node));
    int x;
    printf("Insert New value in the End: ");
    scanf("%d",&x);
    new_node->data=x;
    current->link=new_node;
    new_node->link=NULL;


    node *p=first;

    while(p!=NULL)
    {
        printf("%d\n",p->data);
        p=p->link;
    }
}

