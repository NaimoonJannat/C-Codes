#include<stdio.h>
int main()
{
    int x, cnt;

    printf("Count how many 2 divides 100\n");
    x=100;
    cnt=0;
    while(x%2==0)
    {
        x/=2;
        cnt++;
    }
    printf("Number of '2' is: %d\n",cnt);
    printf("Find out the highest number which is power of 2 and less than 1000\n");
    while(x*2<1000)
    {
        x*=2;
    }

    printf("\nAlternative (using for loop): \n");
    printf("The number is = %d\n",x);

    return 0;
}
