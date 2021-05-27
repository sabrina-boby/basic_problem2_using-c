//array-2
#include<stdio.h>
int main()
{
    int a[5],sum=0,i;
    for(i=0; i<5; i++)
    {
    scanf("%d",&a[i]);
    }

    for(i=0; i<5; i++)
    {
        sum=sum+a[i];

    }
    printf("%d\n",sum);
    printf("everage is : %.2f",(float)sum/5);
}
