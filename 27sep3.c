//find prime numb
#include<stdio.h>
int main()
{
    int numb,i;
    printf("enter any numb : ");
    scanf("%d",&numb);
    for(i=2; i<numb; i++)
    {

     if(numb%i==0)
     {
            printf("not prime numb \n");
             break;
     }
       else
       {
           if(i==numb-1)
        printf("prime numb\n");
       }
    }

}
