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

    int mx1=0,mx2=0,mn1=1000000000,mn2=1000000000;

    while(p!=NULL){
       if(p->data>mx1){
        mx2=mx1;
        mx1=p->data;
       }
       if(p->data>mx2 && p->data<mx1)mx2=p->data;

       if(p->data<mn1){
        mn2=mn1;
        mn1=p->data;
       }
       if(p->data<mn2 && p->data>mn1)mn2=p->data;
        p=p->link;
    }
    printf("2nd Maximum %d\n",mx2);
    printf("2nd Minimum %d\n",mn2);
    return 0;
}

