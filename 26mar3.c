//array-3
#include<stdio.h>
int main()
{
    int num[100],i,n,min;
    printf("how many number :");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }

    min=num[0];
    for(i=1; i<n; i++)
    {
        if(min>num[i])
            min=num[i];
    }
    printf("max : %d",min);

}
