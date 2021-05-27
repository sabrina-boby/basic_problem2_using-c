//2D-array-3
#include<stdio.h>
int main()
{
    int i,j,n,p,a[10][10],b[10][10],c[10][10];

    printf("enter row & colomn : ");
    scanf("%d %d",&n,&p);

    /*for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }*/

    printf("A matrix is :\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<p; j++)
        {
            printf("a [%d] [%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

   printf("\n\nB matrix is :\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<p; j++)
        {
            printf("b [%d] [%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }


    printf("A = ");
    for(i=0; i<n; i++)
    {
        printf("\t");
        for(j=0; j<p; j++)
        {
            printf(" %d ",a[i][j]);
        }
         printf("\n");
    }




    printf("\n\nB = ");
    for(i=0; i<n; i++)
    {
        printf("\t");
        for(j=0; j<p; j++)
        {
            printf(" %d ",b[i][j]);
        }
         printf("\n");
    }


    for(i=0; i<n; i++)
    {
        for(j=0; j<p; j++)
        {
           c[i][j]=a[i][j]+b[i][j];
        }
         printf("\n");
    }

     printf("sum = ");
    for(i=0; i<n; i++)
    {
        printf("\t");
        for(j=0; j<p; j++)
        {
           printf(" %d ",c[i][j]);
        }
         printf("\n");
    }



}
