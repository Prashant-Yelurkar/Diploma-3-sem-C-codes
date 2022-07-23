//Program Of Selection Sort
#include<stdio.h>
int main()
{
    int a[10],n,i,j,temp;
    printf("\nEnter number of array element : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Enter arry element %d : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n\nBefore sorting array\n");
    for(i=0;i<n;i++)
    {
        printf("\nElement No %d is %d",i+1,a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n\nAfter sorting array\n");
    for(i=0;i<n;i++)
    {
        printf("\nElement No %d is %d",i+1,a[i]);
    }
    return 0;
}