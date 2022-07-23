/*-----------program of queue------------*/
#include<stdio.h>
#define MAX 10
int queue[MAX];
int front=-1,rear=-1;
void insert(void);
void display(void);
int delete_element(void);
int main()
{
    int option, val;

    do
    {
        printf("\n\n----------MAIN MENU----------");
        printf("\n     1. Insert an element");
        printf("\n     2. Delete an element");
        printf("\n     3. Display queue");
        printf("\n     4. Exit");
        printf("\n------------------------------");
        printf("\n\n enter your option:");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
                insert();
                break;
            case 2:
                val=delete_element();
                printf("\n the number that was deleted is:%d", val);
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
            printf("wrong choice");
        }
    }
    while (option!=5);



    return 0;
}
void insert()
{
    int num;
    printf("enter the number to be inserted in the queue:");
    scanf("%d",&num);
    if (rear==MAX-1)
    printf("\n overflow");
    if(front==-1&&rear==-1)
    front=rear=0;
    else
    rear++;
    queue[rear]=num;
}
int delete_element()
{
    int val;
    if (front==-1||front>rear)
    {
        printf("\n underflow");
        return-1;
    }
    else
    {
        val=queue[front];
        front++;
        return val;
    }
}
void display()
{
    int i;
    printf("\n");
    for(i=front;i<=rear;i++)
    printf("\t%d",queue[i]);
}