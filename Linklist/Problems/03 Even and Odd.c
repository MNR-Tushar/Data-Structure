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

    while(p!=NULL){
        if(p->data%2==0)printf("%d number is even\n",p->data);
        else printf("%d number is odd\n",p->data);
        p=p->link;
    }
    return 0;
}
