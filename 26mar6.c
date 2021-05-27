//pattern-5
#include<stdio.h>
int main()
{
    int num[]={4,6,7,10,33,99,8,34,77,66},i;

    int value, position=-1;
    printf("enter your search number :");
    scanf("%d",&value);

    for(i=0; i<10; i++)
    {
        if(value==num[i])
        {
            position=i+1;
            break;
        }

    }
    if (position==-1)

        printf("not found");

    else
        printf("tha values and position is : %d %d",value, position);
}
