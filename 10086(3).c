#include<stdio.h>
#include<math.h>
int nthprime(int num)
{
    int prime_array[num]={1};
}
int main()
{
    int k,num,prime;
    scanf("%d",&k);

    while(k)
    {
        scanf("%d",&num);
        prime= nthprime(num);
        printf("%d\n",prime);
        k--;
    }
    return 0;
}
