#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int numbergenerator(int N)
{
    for(int number = pow(10, N-1); number < pow(10, N); number++) //find all the n digit numbers
    {
        return number;
    }
}

int main()
{
    int number;
    int a[100];
    int N,i;
    scanf("%d",&N);

    for(i=0;i<99;i++)
    {
        a[i]=numbergenerator(N);
    }

    for(i=0;i<99;i++)
    {
        printf("%d \n",a[i]);
    }
}
