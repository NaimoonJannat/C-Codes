#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    long long sum=0;
    scanf("%d",&n);
    printf("1^1 + 2^2 + ....+ n^n=");
    for(i=1;i<=n;i++)
    {
        sum= sum+ pow(i,i);

    }
    printf(" %lld\n",sum);
    return 0;
}
