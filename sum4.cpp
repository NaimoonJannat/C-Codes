#include<stdio.h>
int main()
{
    //1+(2+3)+(4+5+6)+....+nth
    int n,i,j,k=1,sum=0;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            sum=sum+k;
            printf("+ %d",k);
            k++;

        }
        printf("\n");
    }
    printf("%d\n",sum);
    return 0;
}
