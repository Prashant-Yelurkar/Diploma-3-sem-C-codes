/*-----Program of stack -----*/
#include<stdio.h>
#include<conio.h>
#define Max 10
int st[Max],top=-1;
void push(int st[],int val);
int pop(int st[]);
void display(int st[]);
int main()
{
    int val,option;
    do
    {
        printf("\n---------------------");
        printf("\n      MAIN MENU      ");
        printf("\n---------------------");
        printf("\n      1.push");
        printf("\n      2.pop");
        printf("\n      3.display");
        printf("\n      4.Exit");
        printf("\n---------------------");
        printf("\n\n Enter your option:");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
                printf("\n Enter the number to be pushed on the stack:");
                scanf("%d",&val);
                push(st,val);
                break;
            case 2:
                val=pop(st);
                printf("\n The value deleted from the stack is:%d",val);
                break;
            case 3:
                display(st);
                break;
            case 4:
                break;
                default:
                printf("\n You have entered Wrong option plz select correct option");
                main();
        }
    }
    while(option !=5);
    return 0;
    }
void push(int st[],int val)
{
    if(top==Max-1)
    {
            printf("\n STACK OVERFLOW");
    }
    else
    {
        top++;
        st[top]=val;
    }
}
int pop(int st[])
{
    int val;
    if(top==-1)
    {
        printf("\n STACK UNDERFLOW");
        return -1;
    }
    else
    {
        val=st[top];
        top--;
        return val;
    }
}
void display(int st[])
{
    int i;
    if(top==-1)
    {
        printf("\n STACK IS EMPTY");
    }
    else
    {
        for(i=top;i>=0;i--)
        printf("\nElements of stack %d is %d",i,st[i]);
    }
}