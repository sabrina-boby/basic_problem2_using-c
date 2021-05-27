//array jog biyog
#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,n,p;
    printf("enter row & col : ");
    scanf("%d %d",&n,&p);

    printf("matrix A is : \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<p; j++)
        {
           printf("a [%d] [%d] = ",i,j);
           scanf("%d",&a[i][j]);
        }
        printf("\n");
    }


    printf("\n\nmatrix B is : \n");
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

    printf("\nB = ");
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

     printf("A + B = ");
    for(i=0; i<n; i++)
    {

        for(j=0; j<p; j++)
        {
           printf(" %d ",c[i][j]);
        }

        printf("\n");
        printf("\t");
    }


}
