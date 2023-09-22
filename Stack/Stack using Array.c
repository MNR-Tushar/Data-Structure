#include<stdio.h>
int stack[4];
int top=-1;
int isempty()
{
    if(top==-1)return 1;
    else return 0;
}
int isfull()
{
    if(top==3)return 1;
    else return 0;
}
int peek()
{
    if(!isempty())printf("%d\n",stack[top]);
    else printf("Stack is empty\n");
}
void push(int x)
{
    if(!isfull())
    {
        top++;
        stack[top]=x;
    }
    else printf("Stack is full\n");
}
int pop()
{
    if(!isempty())
    {
        return stack[top--];
    }
    else printf("Stack is empty\n");
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    printf("%d\n",peek());

    pop();
    pop();
    pop();
    pop();
    pop();
}
