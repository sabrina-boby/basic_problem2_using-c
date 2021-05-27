//upper to lower
#include<stdio.h>
int main()
{
    char upper,lower;
    printf("enter any upper case letter :");
    scanf("%c",&upper);

    lower=tolower(upper);
    printf("tha lower case number is:%c",lower);

}
