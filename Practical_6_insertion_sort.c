/*-------Insertion Sort --------*/
#include<stdio.h>
int main()
    {
    int a[10],i,n,j,k,temp;
    printf("\n Enter number of element : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Enter element %d : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n array before sorting");
    for(i=0;i<n;i++)
    {
        printf("\nElement no %d is %d",i+1,a[i]);
    }
    for(k=1;k<n;k++)
    {
        temp=a[k];     
        j=k-1;     
        while((temp<a[j])&&(j>=0))
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
    printf("\n array after sorting");
    for(i=0;i<n;i++)
    {
        printf("\nElement no %d is %d",i+1,a[i]);
    }
    return 0;
}