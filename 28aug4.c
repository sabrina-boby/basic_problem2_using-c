//find some and avg
#include<stdio.h>
int main()
{
    int numb1,numb2,sum;
    float avg;
    printf("enter two number :");
    scanf("%d %d",&numb1,&numb2);

    sum=numb1+numb2;
    printf("sum is:%d\n",sum);

    avg=(float)sum/2;  //type casting
    printf("avg is:%f",avg);
}
