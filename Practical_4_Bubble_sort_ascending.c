#include<stdio.h>
#include<conio.h>
int main()
{
    int x,k,arr[100],i,j, high,low,mid,found=0;
    printf("\nEnter number of array element (less than 100):");
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        printf("Enter element number %d :\t",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<x;i++)
    {
        for(j=0;j<x-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int t;
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    for(i=0;i<x;i++)
    {
         printf("\nElement number %d is %d",i+1,arr[i]);
    }
    return 0;
}