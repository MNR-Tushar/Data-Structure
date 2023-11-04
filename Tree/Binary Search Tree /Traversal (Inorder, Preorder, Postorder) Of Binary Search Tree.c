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
void inorder(node *r)
{
    if(r==NULL)
        return;
    inorder(r->left);
    printf("%d ",r->data);
    inorder(r->right);
}
void preorder(node *r)
{
    if(r==NULL)
        return;
    printf("%d ",r->data);
    preorder(r->left);
    preorder(r->right);
}
void postorder(node *r)
{
    if(r==NULL)
        return;

    postorder(r->left);
    postorder(r->right);
    printf("%d ",r->data);
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

    printf("\nIn-order of Tree:\n");
    inorder(root);
    printf("\n");
    printf("\nPre-order of Tree:\n");
    preorder(root);
    printf("\n");
    printf("\nPost-order of Tree:\n");
    postorder(root);
    printf("\n");
    return 0;

}

