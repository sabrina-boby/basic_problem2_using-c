//enter two number and their sum & avg
#include<stdio.h>
int main()
{
    int a,b,c;
    float o;
    printf("enter tha number :");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("tha sum is :%d\n",c);
    o=c/2;
    printf("tha avg is :%.2f",o);
    return 0;
}
