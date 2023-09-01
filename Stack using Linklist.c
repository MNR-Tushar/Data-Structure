#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *head,*new1;

int isempty()
{
    if(head==NULL)return 1;
    else return 0;
}
int push(int x)
{
    new1=(void *)malloc(sizeof(struct node));

    new1->data=x;
    new1->next=head;
    head=new1;
}
int peek()
{
    if(isempty())printf("Stack empty\n");
    else
    {
        return head->data;
    }
}
int pop()
{
    if(isempty())return 1;
    else
    {
        int x=head->data;
        head=head->next;
        return x;
    }
}
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);

    printf("%d\n",pop());
    printf("%d\n",pop());
    printf("%d\n",pop());
    printf("%d\n",pop());
    printf("%d\n",pop());
    printf("%d\n",pop());

    return 0;

}
