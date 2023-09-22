#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *front=NULL,*end=NULL;

int isempty()
{
    if(front==NULL && end==NULL)
        return 1;
    else
        return 0;
}
int dequeue()
{
    if(!isempty())
    {
        if(front==end)
        {
            int x=front->data;
            front=NULL;
            end=NULL;
            return x;
        }
        else
        {
            int x=front->data;
            front=front->link;
            return x;
        }
    }
    else
        printf("Queue is Empty\n");
}
int enqueue(int val)
{
    struct node *new1=malloc(sizeof(struct node));
    if(isempty())
    {
        front=new1;
        end=new1;
        end->data=val;
        end->link=NULL;
    }
    else
    {
        new1->data=val;
        end->link=new1;
        end=new1;
        end->link=NULL;
    }
}
int main()
{

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    printf("%d\n",dequeue());
    printf("%d\n",dequeue());
    printf("%d\n",dequeue());
    printf("%d\n",dequeue());


    return 0;
}
