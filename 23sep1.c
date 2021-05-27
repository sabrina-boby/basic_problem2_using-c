//(1-1000) disite er jogfol 9 dea vag
#include<stdio.h>
int main()
{
    int i,r,sum=0,num,m,k,numb;

    for(i=1; i<=1000; i++)
    {
        sum=0;
        m=i;
    while(m!=0)
    {
      r=m%10;
      m=m/10;
      sum=sum+r;


    }
    if(sum==9)
     printf("%d  ",i);
    }

    return 0;
}
