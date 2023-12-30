#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter a number=");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        //printing space
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
         //printing stars
        for(col=1; col<=2*row-1; col++)
        {
            printf("*",col);
        }
        printf("\n");
    }

    return 0;
}
