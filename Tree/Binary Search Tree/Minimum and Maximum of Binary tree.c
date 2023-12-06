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
//Minimum

int minimum(struct node *temp)
{
    while(temp->left !=NULL)
    {
        temp=temp->left;
    }
    return temp->data;
}
// Maximum
int maximum(struct node *temp)
{
    while(temp->right !=NULL)
    {
        temp=temp->right;
    }
    return temp->data;
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

    printf("Minimum %d\n",minimum(root));
    printf("Maximum %d\n",maximum(root));


    return 0;

}
