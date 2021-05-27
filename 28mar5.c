//array-5
#include<stdio.h>
int main()
{
    int a[]={5,7,6,8,9,0,1,2,3,4},i,n,value,position=-1;
    printf("enter your number : ");
    scanf("%d",&value);

    for(i=0; i<10; i++)
    {
        if(value==a[i])
            position=i+1;
    }
    if(position==-1)
    {
        printf("not found");
    }
    else
    {
        printf("value is %d \n position is %d",value,position);
    }
}
