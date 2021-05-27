//pattern
#include<stdio.h>
int main()
{
    int numb,row,col;
    printf("enter a number :");
    scanf("%d",&numb);

    for(row=numb ; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
           printf("%d ",col);
        }
        printf("\n");
    }

}
