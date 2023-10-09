#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *pre;
    struct node *next;
};
int main()
{
    int n;
    scanf("%d",&n);

    struct node *current,*previous,*first;
    for(int i=0;i<n;i++)
    {
        current=malloc(sizeof(struct node));
        scanf("%d",&current->data);

        if(i==0)
        {
            current->pre=NULL;
            first=current;
        }
        else
        {
            previous->next=current;
            current->pre=previous;
        }
        previous=current;
    }
    current->next=NULL;


    struct node *p;
    p=first;
    while(p!=NULL)
    {
        printf("%d\n",p->data);
        p=p->next;
    }

    return 0;
}

