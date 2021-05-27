//count of numb
#include<stdio.h>
int main()
{
    int numb,count=0;
    printf("enter any numb : ");
    scanf("%d",&numb);
    while(numb!=0)
    {
        numb=numb/10;
        ++count;
    }

    printf("%d\n\n\n",count);
    printf("my jaan is the best.\n i love u boby MMMMMMMMMMah\n 100 out of 100");
}
