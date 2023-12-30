#include<stdio.h>
int main()
{
    //n*(n+1)*(2n+1)/6
    int n,i,sum=0;

    scanf("%d",&n);
    printf("1*1 + 2*2 +....+%d*%d=",n,n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i*i;
    }
    printf(" %d\n", sum);
    return 0;
}
