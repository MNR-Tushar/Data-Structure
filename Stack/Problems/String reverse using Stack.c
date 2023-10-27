#include<stdio.h>
#include<string.h>
int len;
char stack[100],top=-1;
int isempty()
{
    if(top==-1)return 1;
    else return 0;
}
int isfull()
{
    if(top==len)return 1;
    else return 0;
}
char peek()
{
    if(!isempty())return stack[top];
    else printf("Stack is empty\n");
}
void push(char val)
{
    if(!isfull())
    {
        top++;
        stack[top]=val;
    }
    else printf("Stack is Full\n");
}
char pop()
{
    if(!isempty())
    {
        char x=stack[top];
        top--;
        return x;
    }
    else printf("Stack is empty\n");
}
int main()
{

    char s[100];
    scanf("%s",s);
    len=strlen(s);
    for(int i=0;i<len;i++)
    {
        push(s[i]);
    }

    while(top!=-1)
    {
        printf("%c",pop());
    }


    return 0;
}

