#include<stdio.h>
#include<math.h>
/* cos x=1-x^2/2! + x^4/4!-....+nth
    =x^0/0!-x^2/2!+x^4/4!-....+x^(2n-2)/(2n-2)! */

int factorial(int n)
{
    int i;
    int fact=1;
    for(i=n;i>0;i--)
        fact=fact*i;
    return fact;
}

int main()
{
    double x,sum=0;
    int n,i,topow=0;
    scanf("%lf%d",&x,&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            sum=sum+pow(x,topow)/factorial(topow);
        else
            sum=sum-pow(x,topow)/factorial(topow);
            topow+=2;
    }
    printf("cos(%lf radian)=%lf radian",x,sum);
    return 0;
}
