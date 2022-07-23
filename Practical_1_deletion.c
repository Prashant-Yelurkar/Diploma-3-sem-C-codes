/*---Delete an element into one dimensional array---*/
#include<stdio.h>
int main()
{
    int a[10],i,x,c,pos,n;

    printf("\nEnter no of elements :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element no %d\t :",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n Arary is:");
    for(i=0;i<n;i++)
    {
        printf("\n Element no %d\t%d",i+1,a[i]);
    }
    printf("\n Eneter element to be deleted : ");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            c=1;
            pos=i;
            break ;
        }
    }
    if(c==1)
    {
        for (i=pos;i<n;i++)
        {
            a[i]=a[i+1];  
        }
        printf("Array after deletion \n");
        for(i=0;i<n-1;i++)
        {
            printf("\n Element no %d\t%d ",i+1,a[i]);
        }
    }
    else
    {
        printf("Element was not found.....");
    }
    return 0;
}