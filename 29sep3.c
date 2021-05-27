//sifn strong numb
#include<stdio.h>
int main()
{
    int numb,sum=0,i=0,r,fact=0;
    printf("enter any numb : ");
    scanf("%d",&numb);
    while(numb!=0);
    {
        r=numb%10;
        for(i=1; i<=r; i++)
        {
            fact=fact*i;
        }

        numb=numb/10;
        sum=sum+r;
    }
    if(sum==numb)
        printf("it is strong numb : %d",sum);

    else
     printf("it is not strong numb : %d",sum);

}
