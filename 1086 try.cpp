#include<stdio.h>


int main()
{
    int i,n,l,temp;
    scanf("%d",&n);
    temp=sqrt(n);
        for(i=2;i<=n;i++)
    {
           if(i==2 || i%2!=0 || i%3!=0)
           printf("%d ",i);
    }
    return 0;
}
