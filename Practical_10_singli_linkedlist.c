#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void createlist(int);
void addatbeg(int);
void addafterpos(int , int);
void addatend(int);
void delatbeg();
void delinbetween(int);
void delatend();
void display();
void search(int);
void count();
void eraselist();
struct node
{
    int info;
    struct node *link;
}*start;
void main()
{
    int choice,m,n,pos,i;
    start = NULL;
    do
    {
        printf("\n ^^^ MENU ^^^");
        printf("\n 1. Create List");
        printf("\n 2. Add at Beginning");
        printf("\n 3. Add after Position");
        printf("\n 4. Add at End");
        printf("\n 5. Delete at Beginning");
        printf("\n 6. Delete in Between");
        printf("\n 7. Delete at End");
        printf("\n 8. Display Operation");
        printf("\n 9. Search operation");
        printf("\n 10. Count Operation");
        printf("\n11. Erase List");
        printf("\n 12. Exit Opertaion");
        printf("\nEnter your choice >");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("\n\n\t How many nodes you want >");
                scanf("%d",&n);
                    for(i = 0;i <n;i++)
                    {
                        printf("\n\t Enter Data value >");
                        scanf("%d",&m);
                        createlist(m);
                    }

                break;
            case 2:
                printf("\n\n\t Enter data value >");
                scanf("%d",&m);
                addatbeg(m);
                break;
            case 3:
                printf("\n\n\t Enter data value >");
                scanf("%d",&m);
                printf("\n\n\t Enter the position you wanna enter the node >");
                scanf("%d",&pos);
                addafterpos(m , pos);
                break;
            case 4:
                printf("\n\n\t Enter the data value >");
                scanf("%d",&m);
                addatend(m);
                break;
            case 5:
                if(start == NULL)
                {
                    printf("\n\n\t The List is Empty");
                    exit(1);
                }
                delatbeg();
                break;
            case 6:
                printf("\n\n\t Enter position after which node is deleted >");
                scanf("%d",&pos);
                delinbetween(pos);
                break;
            case 7:
                delatend();
                break;
            case 8:
                display();
                break;
            case 9:
                printf("\n\n\t Enter data to be searched >");
                scanf("%d",&m);
                search(m);
                break;
            case 10:
                count();
                break;
            case 11:
                eraselist(n);
                break;
            case 12:
                exit(1);
                break;
            default:
                printf("\n\n\t Entered choice is Invalid");
                break;
        }
    }
    while(choice <= 12);
    getch();
}
void createlist(int data)
{
    struct node *temp , *q;
    temp = malloc(sizeof(struct node));
    temp->info = data;
    temp->link = NULL;
    if(start == NULL)
    {
        start = temp;
    }
    else
    {
        q = start;
        while(q->link != NULL)
            q = q->link;
            q->link = temp;
    }
}
void addatbeg(int data)
{
    struct node *temp;
    temp = malloc(sizeof(struct node));
    temp->info = data;
    temp->link = NULL;
    temp->link = start;
    start = temp;
}
void addafterpos(int data, int pos)
{
    struct node *temp , *q;
    int i;
    q = start;
    for(i = 0 ; i<pos - 1 ; i++)
    {
        q = q->link;
        if(q == NULL)
        {
            printf("\n\n\t There are less than %d elememts",pos);
            //return;
        }
    }
    temp = malloc(sizeof(struct node));
    temp->info = data;
    temp->link = q->link;
    q->link = temp;
}
void addatend(int data)
{
    struct node *temp , *q;
    q = start;
    temp = malloc(sizeof(struct node));
    temp->info = data;
    temp->link = NULL;
    while(q->link != NULL)
    q = q->link;
    q->link = temp;
}
void delatbeg()
{
    struct node *temp , *q;
    //if(start == NULL)
    temp = start;
    start = start->link;
    free(temp);
}
void delinbetween(int pos)
{
    struct node *temp , *q;
    int i;
    q = start;
    for(i = 0;i <= pos-2; i++)
        q = q->link;
        q->link = temp->link;
        free(temp);
}
void delatend()
{
    struct node *temp , *q;
    q = start;
    if(q->link == NULL)
    {
        free(q);
        start = NULL;
    }
    else
    {
        while(q->link->link != NULL)
        q = q->link;
        temp = q->link;
        free(temp);
        q->link = NULL;
        //return;
    }
}
void display()
{
    struct node *q;
    if(start == NULL)
    {
        printf("\n\n\t The List is Empty");
        //return;
    }
    q = start;
    printf("\n\n\t The List is >");
    while(q != NULL)
    {
        printf("\n\t %d",q->info);
        q = q->link;
    }
}
void count()
{
    struct node *q;
    int c = 0;
    q = start;
    while(q != NULL)
    {
        q = q->link;
        c++;
    }
    printf("\n\n\t The number of nodes in the list are %d",c);
}
void search(int data)
{
    struct node *q;
    int pos = 1;
    q = start;
    while(q != NULL)
    {
        if(q->info == data)
        {
            printf("\n\n\t The Element %d is found at position %d",data,pos);
            return;
        }
        else
        {
            q = q->link;
            pos++;
        }
        if(q == NULL)
            printf("\n\n\t The element %d is not found in the list",data);
    }
}
void eraselist(int n)
{
    int i;
    for(i = 0;i <n;i++)
        delatbeg();
    printf("\n\n\n List is now Empty");
}