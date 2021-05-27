//gounik man ba factorial numb(1- oi numb porjonto gun)
#include<stdio.h>
int main()
{
    int i,numb,r=1;
    printf("enter any numb :");
    scanf("%d",&numb);
    for(i=1; i<=numb; i++)
    {
        r=r*i;

    }
      printf("%d\n",r);
}
