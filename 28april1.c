//inter any integer number and their sum,sub,gunny,reminder,divide
#include<stdio.h>
int main()
{
    int a,b,x;
    printf("enter two integer number :");
    scanf("%d %d",&a,&b);

    x=a+b;
    printf("tha sum is %d\n",x);

    x=a-b;
    printf("tha sub is %d\n",x);

    x=a*b;
    printf("tha gunny is %d\n",x);

    x=a%b;
    printf("tha reminder is %d\n",x);

    x=a/b;
    printf("tha divide is %d\n",x);


    return 0;

}
