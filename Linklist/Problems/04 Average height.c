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

    node *p=first;
    int total=0;

    while(p!=NULL){
        total+=p->data;
        p=p->link;
    }
    printf("Average height: %d\n",total/n);
    return 0;
}

