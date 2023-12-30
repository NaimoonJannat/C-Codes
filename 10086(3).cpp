#include<stdio.h>
#include<math.h>
int ran=163842;
int primes[ran];

int primeArray(void)
{

    for(int i=0; i<ran; i++)
    {
      prime[i]=1;
    }
    primes[0]=0;
    primes[1]=0;
    for(int i=2;i<sqrt(ran);i++)
    {
        if(primes[i]==1)
            {
                for(int j=i*i;i<=sqrt(ran);j+=i)
                    primes[j]=0;
            }
    }
    for(int i=0;i<=20;i++)
        if(primes[i]==1)
            printf("%d",i);
}
int nthprime(int num)
{
    int prime_array[163841]={0};
    int i;

    /*for(i=0;i<num;i++)
        printf("%d ",prime_array[i]);
    printf("\n");
    return 1; */
}
int main()
{
    int k,num,prime;
    scanf("%d",&k);

    while(k)
    {
        scanf("%d",&num);
        //prime= nthprime(num);
        //intf("%d\n",prime);
        nthprime();
        k--;
    }
    return 0;
}
