//array-3
#include<stdio.h>
int main()
{
    int a[100],n,i,max,min;
    printf("enter how many number : ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",& a[i]);
    }
     max=a[0];
     min=a[0];

    for(i=1; i<n; i++)
    {
        if(max<a[i])
           max=a[i];
    }

    for(i=1; i<n; i++)
    {
        if(min>a[i])
           min=a[i];
    }

    printf("min = %d\n",min);
    printf("max = %d",max);
}
