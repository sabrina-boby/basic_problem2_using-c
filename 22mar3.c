//pattern6
#include<stdio.h>
int main()
{
    int col,row,n;
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=(n-row); col++)
        {
            printf(" ");
        }
       for(col=1; col<=row; col++)
       {
           printf("%d",row);
       }
       printf("\n");
    }
}
