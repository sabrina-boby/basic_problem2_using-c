//pattern-19
int main()
{
    int row,col,n;
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {

        for(col=1; col<=row; col++)
        {
             if(col==row||row+col==n+1)
                printf("*");


            else
                printf(" ");
        }
        printf("\n");
    }
}

