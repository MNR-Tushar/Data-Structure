#include<stdio.h>
int stack[50],top=-1;
int isempty()
{
    if(top==-1)return 1;
    else return 0;
}
int isfull()
{
    if(top==49)return 1;
    else return 0;
}
int peek()
{
    if(!isempty())return stack[top];
    else printf("Stack is empty\n");
}
void push(int val)
{
    if(!isfull())
    {
        top++;
        stack[top]=val;
    }
    else printf("Stack is Full\n");
}
int pop()
{
    if(!isempty())
    {
        int x=stack[top];
        top--;
        return x;
    }
    else printf("Stack is empty\n");
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n!=0)
    {
        int b=n%16;
        push(b);
        n/=16;
    }

    while(!isempty())
    {
        int x=pop();
        if(x==10)printf("A");
        else if(x==11)printf("B");
        else if(x==12)printf("C");
        else if(x==13)printf("D");
        else if(x==14)printf("E");
        else if(x==15)printf("F");
        else printf("%d",x);
    }


    return 0;
}


