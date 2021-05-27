//fibonakkhi
#include<stdio.h>
int main()
{
    int n1=0,n2=1,i,sum,numb;
    printf("enter a number :");
    scanf("%d",&numb);
    for(i=0; i<numb; i++)
    {
           if(i<=1)
            sum=i;
           else
           {
            sum=n1+n2;
            n1=n2;
            n2=sum;
           }

     printf("%d\t",sum);
    }
}
