//multiplication
#include<stdio.h>
int main()
{
    int first[10][10],second[10][10],result[10][10],i,j,k,r1,r2,c1,c2,sum=0;

    printf("enter 1st matrix's row & col :");
    scanf("%d %d",&r1,&c1);

    printf("enter 2nd matrix's row & col :");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
        printf("error !!");

        printf("enter 1st matrix's row & col :");
        scanf("%d %d ",&r1,&c1);

        printf("enter 2nd matrix's row & col :");
        scanf("%d %d ",&r2,&c2);

    }

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&first[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("b[%d][%d] = ",i,j);
            scanf("%d",&second[i][j]);
        }
        printf("\n");
    }

    printf("A = ");
    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c1; j++)
        {
            printf(" %d ",first[i][j]);

        }
        printf("\n");
    }

    printf("\nB = ");
    for(i=0; i<r2; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
        {
            printf(" %d ",second[i][j]);

        }
        printf("\n");
    }

    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum=sum+first[i][k]*second[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
        printf("\n");
    }


     printf("sum = \n");
    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
        {
            printf(" %d ",result[i][j]);

        }
        printf("\n");
    }

}


