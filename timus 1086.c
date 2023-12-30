#include<stdio.h>

public int prime_check(){



}

int main()
{
    int k,num,i,prime=1,prime_check;
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        scanf("%d",&num);
        while(num>1)
        {
            if(prime_check(prime)==1)
                num--;
            prime++;
        }
        printf("%d\n",prime);
    }
   return 0;
}
