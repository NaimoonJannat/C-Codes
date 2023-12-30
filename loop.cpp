#include<stdio.h>
#include<math.h>
int main()
{
    //1-2+3-4....nth
    int n,i,j,k=1,sum=0;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum=sum+pow(-1,i+1)*i;
    }
    printf("%d",sum);

    return 0;
}
