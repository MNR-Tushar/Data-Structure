#include<stdio.h>
#include<math.h>
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
    int n,p=0,x=0,b=0;
    scanf("%d",&n);
    while(n!=0)
    {
        b=n%10;
        n/=10;
        push(b);
    }

    int i=top;
    while(!isempty())
    {
        x=pop();
        p += x*pow(2,i);
        i--;
    }
    printf("%d\n",p);



    return 0;
}



