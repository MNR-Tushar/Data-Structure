#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *current,*first,*previous;

    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        current=malloc(sizeof(struct node));
        int x;
        scanf("%d",&x);

        current->data=x;

        if(i==0)first=current;
        else{
            previous->link=current;
        }
        previous=current;

    }

    current->link=NULL;

    struct node *p=first;

    int max1=-1,min1=10000000;

    while(p!=NULL){
        if(p->data>max1)max1=p->data;
        if(p->data<min1)min1=p->data;
        p=p->link;
    }

    printf("Maximum= %d and Minimum= %d\n",max1,min1);



    return 0;
}
