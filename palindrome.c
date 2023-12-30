#include<stdio.h>
int main()
{
int n,num=1,rev=0,temp;
scanf("%d",&n);

while(n>0)
{

    temp=num;
    while(temp>0)
    {
      rev=(rev*10)+(temp%10);
      temp=temp/10;

    }
    if(rev==temp)
    {
        temp--;
    }
    num++;
}

printf("%dth palindrome is %d\n",n,num);


return 0;
}
