#include<stdio.h>
int queue[5],front=-1,end=-1;
int isempty()
{
    if(front==-1 && end==-1)return 1;
    else return 0;
}
int isfull()
{
    if(end==4)return 1;
    else return 0;
}
int enqueue(int val)
{
    if(!isfull())
    {
        if(isempty())
        {
            front++,end++;
            queue[end]=val;
        }
        else
        {
            end++;
            queue[end]=val;
        }
    }
    else printf("Queue is Full\n");
}
int dequeue()
{
    if(!isempty())
    {
        int x;
        if(front==end)
        {
            x=queue[front];
            front=-1,end=-1;
            return x;
        }
        else
        {
            x=queue[front];
            front++;
            return x;
        }
    }
    else printf("Queue is Empty\n");
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);

    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();


    return 0;
}



