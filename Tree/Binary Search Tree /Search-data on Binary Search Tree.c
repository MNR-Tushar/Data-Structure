#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
typedef struct node node;
node *root=NULL;

void insert_node(int val)
{
    node *current=NULL,*parent=NULL,*temp=NULL;

    temp=(node* )malloc(sizeof(node));
    temp->data=val;

    temp->left=NULL;
    temp->right=NULL;

    if(root==NULL)root=temp;
    else
    {
        current=root;
        parent=NULL;

        while(1)
        {
            parent=current;
            if(val<=parent->data)
            {
                current=current->left;
                if(current==NULL)
                {
                    parent->left=temp;
                    return;
                }
            }
            else
            {
                current=current->right;
                if(current==NULL)
                {
                    parent->right=temp;
                    return;
                }
            }
        }

    }

}
void searchtree(int val)
{
    node *c=root;
    int ok=0;

    while(1)
    {
        if(c==NULL)
        {
            break;
        }
        if(val==c->data)
        {
            ok=1;
            break;
        }
        else if(val<c->data)
        {
            c=c->left;
        }
        else
        {
            c=c->right;
        }
    }

    if(ok==1)printf("%d is Found.\n",c->data);
    else printf("%d is Not Found.\n",val);
}


int main()
{
    insert_node(50);
    insert_node(45);
    insert_node(70);
    insert_node(35);
    insert_node(40);
    insert_node(60);
    insert_node(80);

    searchtree(35);


    return 0;

}

