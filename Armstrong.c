#include<stdio.h>
int main()
{
    int n=153,q,r,result=0;
    q=n;
    while(q!=0)
    {
        r=q%10;
        result=result+r*r*r;
        q=q/10;
    }
    if(result==n)
        printf("Armstrong");
    else
        printf("Not Armstrong");
    return 0;
}
