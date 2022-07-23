//linear search
#include<stdio.h>
void main()
{
    int a[100],i,n,x,j;
    int c=0;
    printf("\nEnter element of Array:\t");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("Enter %d element of array :",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nEnter element to search :");
    scanf("%d",&x);
    for (i=0;i<n;i++)
    {
        if (x==a[i])
        {
            printf("\nElement %d found at position : %d ",x,i+1);
            c++;
        }
        if(i==(n-1)&& c==0)
        {
            printf("\nElemnt %d not found in array ",x);
        }
    }
}
