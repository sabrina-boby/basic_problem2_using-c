//array-6
#include<stdio.h>
int main()
{
    int a1[100],a2[100],i,n;
    printf("enter how many numbers :");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
      scanf("%d",&a1[i]);
    }

    printf("array1= ");
    for(i=0; i<n; i++)
    {
        printf("%d",a1[i]);
    }
    for(i=0; i<n; i++)
    {
        a2[i]=a1[i];
    }
    printf("\narray2= ");
    for(i=0; i<n; i++)
    {
        printf("%d",a2[i]);
    }
}
