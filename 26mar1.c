//array-2
#include<stdio.h>
int main()
{
    int num[100],i,sum=0,n;
    printf("how many number do u want to sum? : ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }

    for(i=0; i<n; i++)
    {
    sum=sum+num[i];
    }
    printf("%d",sum);
}
