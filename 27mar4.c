//array-5
#include<stdio.h>
int main()
{
    int a[]= {101,5,10,33,35,16,18,2,4,6},n,i,value,position=-1;
    printf("enter value : ");
    scanf("%d",&value);

    for(i=0; i<10; i++)
    {
        if(value==a[i])
            position=i+1;
    }
    if(value==-1)
    {
        printf("not found");
    }
    else
        printf("its found %d \n position %d",value,position);
}



