#include<stdio.h>
int main()
{
    int n,q,r,result=0;
    printf("Enter a number:");
    scanf("%d",&n);
    q=n;
    //result=0;
    while(q!=0)
    {
        r=q%10;
        result=result*10+r;
        q=q/10;
    }
    if(result==n)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}
