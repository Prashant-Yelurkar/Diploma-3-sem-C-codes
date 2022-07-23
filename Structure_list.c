#include<stdio.h>
struct object
{
    char g[20];
    char h[20];
    char i[20];
    char j[20];
    char k[20];
    char l[20];
    char p[20];
};
void main()
{
    int m,i;
    char z[20];
    char a[20];
    char b[20];
    char c[20];
    char d[20];
    char e[20];
    char f[20];
    char n[20];
    printf("\n\tName of object=");
    scanf("%s",z);
    printf("\tNumber of %s =",z);
    scanf("%d",&m);
    struct object o[m];
    printf("\n");
    printf("\t1 criteria=");
    scanf("%s",a);
    printf("\t2 criteria=");
    scanf("%s",b);
    printf("\t3 criteria=");
    scanf("%s",c);
    printf("\t4 criteria=");
    scanf("%s",d);
    printf("\t5 criteria=");
    scanf("%s",e);
    printf("\t6 criteria=");
    scanf("%s",f);
    printf("\t7 criteria=");
    scanf("%s",n);
    printf("\n\n");
    for(i=0;i<m;i++)
    {
        printf("\t%s=",a);
        scanf("%s",o[i].g);
        printf("\t%s=",b);
        scanf("%s",o[i].h);
        printf("\t%s=",c);
        scanf("%s",o[i].i);
        printf("\t%s=",d);
        scanf("%s",o[i].j);
        printf("\t%s=",e);
        scanf("%s",o[i].k);
        printf("\t%s=",f);
        scanf("%s",o[i].l);
        printf("\t%s=",n);
        scanf("%s",o[i].p);
        printf("\n\n\n");
    }
    printf("\t\t\t-------------------------------------------------------\n");
    printf("\t\t\t                  list of %s                        \n",z);
    printf("\t\t\t-------------------------------------------------------\n");
    printf("\n\n");
    for(i=0;i<m;i++)
    {
        printf("\t\t\t\t %s= %s\n",a,o[i].g);
        printf("\t\t\t\t %s= %s\n",b,o[i].h);
        printf("\t\t\t\t %s= %s\n",c,o[i].i);
        printf("\t\t\t\t %s= %s\n",d,o[i].j);
        printf("\t\t\t\t %s= %s\n",e,o[i].k);
        printf("\t\t\t\t %s= %s\n",f,o[i].l);
        printf("\t\t\t\t %s= %s\n",n,o[i].p);
        printf("\n");
        printf("\t\t\t--------------------------------------------------\n\n");
    }
}