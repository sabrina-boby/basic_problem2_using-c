//pattern
#include<stdio.h>
int main()
{
    int col,row,n;
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" %d ",row);
        }
        printf("\n");
    }

    for(row=(n-1) ; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" %d ",row);
        }
        printf("\n");
    }


}
