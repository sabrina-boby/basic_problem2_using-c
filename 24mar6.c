//patttern-19
#include<stdio.h>
int main()
{
    int row,col,n;
    scanf("%d",&n);
    for(row=n; row>=1; row--)
    {
        for(col=1; col<=n; col++)
        {
            if(row==col||row+col==n+1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

}
