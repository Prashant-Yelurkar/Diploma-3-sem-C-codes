#include<stdio.h>
int main()
{
    int a[10],i,max=10,n,b,pos,k;
    printf("Enter the nunmber of Element: \t");
    scanf("%d",&n);
    if (n<max)
    {
        for(i=0;i<n;i++)
        {
            printf("Enter the Element %d :\t",i+1);
            scanf("%d",&a[i]);
        }
        printf("\nArray Element iS :\n");
        for(i=0;i<n;i++)
        {
            printf("Array Element at %d :\t%d\n",i+1,a[i]);
        }
        printf("\nEnter Element To Add in Array:");
        scanf("%d",&b);
        printf("Enter the position of this Element :");
        scanf("%d",&pos);
        for(i=n;i>=pos;i--)
        {
            a[i]=a[i-1];
        }
        a[pos-1]=b;
        printf("\nArray afer Insertion of Element:\n");
        for(i=0;i<n+1;i++)
        {
            printf("Array Element at %d :\t%d\n",i+1,a[i]);
        }
    }
    else
    {
        printf("Memory Is not avabliable select upto 9 Elements \n");
        printf("try again 1=Yes,2=No :\t");
        scanf("%d",&k);
        if(k==1)
        {
            main();
        }
        else
        {
            printf("\nThank you For Using Us :)");
        }
    }
    return 0;
}