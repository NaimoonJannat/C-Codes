#include<stdio.h>
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
    int n,r, result=0;
    printf("Enter two numbers: ");
    scanf("%d%d",&n,&r);

    result=factorial(n)/(factorial(r) * factorial(n-r));
    printf("%dC%d =%d\n",n,r, result);
    return 0;
}
