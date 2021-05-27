//array-2
#include<stdio.h>
int main()
{
    int a[100],n,i,sum=0;
    printf("enter ur number : ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
     sum=sum+a[i];

    printf("sum = %d",sum);
}
