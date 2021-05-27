//Write a C program to find sum of all even numbers between 1 to n.
#include<stdio.h>
int main()
{
    int a,b,i,j=0;
    printf("enter any numb : ");
    scanf("%d%d",&a,&b);
    for(i=a; i<=b; i=i+2)
    {
        if(i%2!=0)
          ++i;
       j=j+i;

    }
    printf("%d\ntumi jodi ca how ami hobo cup\n tmi baccar ma hole ami hobo baaap",j);
}
