//loshagu , goshagu
#include<stdio.h>
int main()
 {
     int a,b,r,n1,n2,lcm;
     printf("enter two numb :");
     scanf("%d%d",&a,&b);
     n1=a;
     n2=b;
     while(n2!=0)
     {
         r=n1%n2;
         n2=n1;
         n2=r;
     }
     printf("gcd = %d\n",n1);
     lcm=a*b/n1;
     printf("lcm = %d\n",lcm);
     return 0;
 }
