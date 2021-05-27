//user define (1-any disigt) -jar jogfol gulo 9 dara vag print hobe
#include<stdio.h>
int main()
{
    int numb,sum=0,m,n,i,r;
    scanf("%d",&n);

    for(i=0; i<=n; i++)
    {
     m=i;
     sum=0;

        while(m!=0)
          {
              r=m%10;
              m=m/10;
              sum=sum+r;
          }
        if(sum==9)
         printf("%d ",i);

    }
    return 0;
}
