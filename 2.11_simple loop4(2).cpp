#include<stdio.h>
int main()
{
    int i,j,n, sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum= sum+i*(i+1)/2;
    }
    printf("Sum is= %d\n",sum);
    return 0;
}
