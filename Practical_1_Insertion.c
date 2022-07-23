/*Program Of Insert an element into one dimensional array */
#include<stdio.h>
void main()
{
    int x,i,max=10,pos,K,n,a[10];

    printf("\nEnter number of element :");
    scanf("%d",&n);
    if(n<max)
    {
        printf("\nEnter the element:\n");
        for(i=0;i<n;i++)
        {
            printf("Enter element %d :",i+1);
            scanf("%d",&a[i]);
        }
        printf("Array");
        for(i=0;i<n;i++)
        {
            printf("\n Element no %d is %d ",i+1,a[i]);
        }
        printf("\n Enter the element to be added:");
        scanf("%d",&x);
        printf("\n Enter the postion of the element where element to be added: ");
        scanf("%d",&pos);
        for(i=n;i>=pos;i--)
        {
            a[i]=a[i-1];
        }
        a[pos-1]=x;
        printf("Array with element inserted:");
        for(i=0;i<n+1;i++)
        {
            printf("\n Element no %d is %d ",i+1,a[i]);
        }
    }
    else
    {
    printf("Memory not available....\n try again 1=YES,2=NO :");
    scanf("%d",&K);
    if(K==1)
    main();
    }
}