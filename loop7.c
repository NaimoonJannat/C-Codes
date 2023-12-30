//1*(n-0)( + 2*(n-1)+....+n*(n-(n-1))
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum=sum+i*(n-(i-1));
    }
    printf("%d\n",sum);
    return 0;
}
