//array-2
#include<stdio.h>
int main()
{
    int num[100],i,n,sum=0;
    printf("how many numbers sum? :");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }

    for(i=0; i<n; i++)
    {
      sum=sum+num[i] ;
    }
    printf("sum : %d\n",sum);
    printf("avg : %.3f",(float)sum/n);
}
