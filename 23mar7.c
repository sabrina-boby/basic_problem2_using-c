//pattern18
int main()
{
    int row,col,n;
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
             if(col==row)
                printf("*");


            else
                printf(" ");
        }
        printf("\n");
    }
}
