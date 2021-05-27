//sum of digits
#include<stdio.h>
int main()
{
    int numb,r,m,sum=0,i;
    printf("enter any numb :");
    scanf("%d",&numb);
   while(numb!=0)
    {
        r=numb%10;
        numb=numb/10;
        sum=(sum*10)+r;
    }
    printf("%d",sum);
}
