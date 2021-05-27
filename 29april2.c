//swaping/exchange numbers with temporary veriable 
#include<stdio.h>
int main()
{
    int number1=5;
    int number2=10;
    int o;

    o=number1;
    number1=number2;
    number2=o;
   
    printf("tha swap number1 is :%d\n",number1);
    printf("tha swap number2 is :%d\n",number2);
    return 0;
}

