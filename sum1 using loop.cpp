#include<Stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    printf("1+2+3+.....+%d\n",n);

    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
     printf("The sum is: %d\n",sum);

    return 0;
}
