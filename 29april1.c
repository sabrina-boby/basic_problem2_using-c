//area= sqrt{s*(s-a)*(s-b)*(s-c)}
//s=(a+b+c)/3
#include<stdio.h>
int main()
{
    double a,b,c,s,o;
    printf("enter 3 values :");
    scanf("%lf %lf %lf",&a,&b,&c);
    s=(a+b+c);
    o=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("tha area of triungle :%.2lf",o);
    return 0;
}
