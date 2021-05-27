//2D array-3
#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,k,n;
    printf("enter how many number : ");
    scanf("%d",&n);

     for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("a[%d] [%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

       for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("b[%d] [%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("a = ");
       for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    printf("b = ");
      for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf(" %d ",b[i][j]);
        }
        printf("\n");
    }

}
