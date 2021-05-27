//multiplication
#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,row1,row2,col1,col2;

    printf("enter 1st matrix's row & col :");
    scanf("%d %d",&row1,&col1);

    printf("enter 2nd matrix's row & col :");
    scanf("%d %d",&row2,&col2);

    while(col1!=row2)
    {
        printf("error !!");

        printf("enter 1st matrix's row & col :");
        scanf("%d %d",&row1,&col1);

        printf("enter 2nd matrix's row & col :");
        scanf("%d %d",&row2,&col2);

    }
    printf("enter fst matrix :\n");
    for(i=0; i<row1; i++)
    {
        for(j=0; j<col1; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("enter 2nd matrix :\n");
    for(i=0; i<row2; i++)
    {
        for(j=0; j<col2; j++)
        {
            printf("b[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    printf("A =");
    for(i=0; i<row1; i++)
    {
         printf("\t");
        for(j=0; j<col1; j++)
        {
            printf("%d",a[i][j]);

        }
        printf("\n");
    }

     printf("\nB =");
    for(i=0; i<row2; i++)
    {
         printf("\t");
        for(j=0; j<col2; j++)
        {
            printf("%d",b[i][j]);

        }
        printf("\n");
    }




    }

