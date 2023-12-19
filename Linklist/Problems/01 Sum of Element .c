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
        current=(node* )malloc(sizeof(node));
        scanf("%d",&current->data);

        if(i==0)first=current;
        else{
            previous->link=current;
        }
        previous=current;
    }
    current->link=NULL;

    int sum=0;
    node *p=first;

    while(p!=NULL){
        sum+=p->data;
        p=p->link;
    }
    printf("Sum Of Element: %d\n",sum);
    return 0;
}
