#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void insert(int);
void inorder(struct node *);
void preorder(struct node *);
void postorder(struct node *);
struct node
{
int info;
struct node *left,*right;
}*root;
int main()
{
    int i,n,m;
    root=NULL;
    printf("Enter No. of nodes to be inserted\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter Data Value\n");
        scanf("%d",&m);
        insert(m);
    }
    printf("\n inorder Transversal\n");
    inorder(root);
    printf("\n preoder Transversal");
    preorder(root);
    printf("\n postorder transversal");
    postorder(root);
    getch();
}
void insert(int m)
{
    struct node *tmp, *x, *y;
    tmp=malloc(sizeof(struct node));
    tmp->info=m;
    tmp->left=NULL;
    tmp->right=NULL;
    //y=NULL;
    y=x=root;
    while(x!=NULL)
    {
        y=x;
        if(tmp->info<x->info)
            x=x->left;
        else
            x=x->right;
    }
    if(y==NULL)
        root=tmp;
    else
        if(tmp->info<y->info)
            y->left=tmp;
        else
        y->right=tmp;
}
void inorder(struct node *ptr)
{
//printf("InorderTransversing \n");
    if(ptr!=NULL)
    {
        inorder(ptr->left);
        printf("%d\t",ptr->info);
        inorder(ptr->right);
    }
}
void preorder(struct node *ptr)
{
//printf("PreorderTransversing");
    if(ptr!=NULL)
    {
        printf("%d\t",ptr->info);
        preorder(ptr->left);
        preorder(ptr->right);
    }
}
void postorder(struct node *ptr)
{
    if(ptr!=NULL)
    {
        postorder(ptr->left);
        postorder(ptr->right);
        printf("%d\t",ptr->info);
    }
}