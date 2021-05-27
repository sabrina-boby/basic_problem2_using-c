//array-5
#include<stdio.h>
int main()
{
    int a[]={1,4,7,8,9,3,2,0,6,5},i,n,position=-1,value;
    printf("your searcing numb : ");
    scanf("%d",&value);

    for(i=0; i<10; i++)
    {
        if(value==a[i])
            position=i+1;

    }

    if (position==-1)
    {
        printf("not found ");
    }
    else
    {
       printf("value %d , position %d ",value,position);
    }














}
