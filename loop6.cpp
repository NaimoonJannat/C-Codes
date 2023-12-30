#include<stdio.h>
int main()
{
    int n,i,j,k,mul=1, val=1, sum=0;
    scanf("%d",&n);

    for(i=1; i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            mul=1;
            for(k=1;k<=j;k++)
            {
                mul=mul*val;
                val++;
            }
            sum=sum+mul;

        }

    }
    printf("Sum= %d\n",sum);
    return 0;
}
