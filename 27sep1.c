//namta user define
#include<stdio.h>
int main()
{
    int numb,i,k;
    printf("enter any numb : ");
    scanf("%d",&numb);

    for(i=1;i<=10;i++)
    {
       k=numb*i;
        printf("%d * %d = %d \n",numb,i,k);
    }

    return 0;
}
