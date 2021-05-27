//1-2 + 3-4 + 5-6 + ...
//(1+3+5+...)-(2+4+6+...)
#include<stdio.h>
int main()
{
    int n,i,even=0,odd=0;
    printf("enter a number :");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
           even=even+i;
            printf("%d\t",even);
        }

        else
        {
             odd=odd+i;
            printf("%d\t",odd);
        }

    }
    printf("result : %d",odd-even);
}
