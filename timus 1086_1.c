#include<stdio.h>
#include<math.h>
int check()
{
    int i,n,flag=0;

    int temp=(int)sqrt(n);
    for(i=2;i<=temp;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    printf("Flag= %d\n",flag);
    return flag;

}

int main()
{
    int k,i,n,flag;
    scanf("%d",&k);

    for(i=1;i<=k;i++)
    {
        scanf("%d",&n);
        check(n);
        n--;
        if(flag==1)
        printf("Not Prime\n");
    else
        printf("Prime\n");
    }

    return 0;
}
