//array-2
#include<stdio.h>
int main()
{
    int a[100],sum=0,i,n;
    printf("enter ur number :");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

     for(i=0; i<n; i++)
    {
        sum=sum+a[i];
    }

    printf("sum : %d\n",sum);
    printf("avg : %d",sum/n);
}
