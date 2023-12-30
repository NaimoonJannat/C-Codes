#include<stdio.h>
int main()
{
    int year;
    scanf("%d",&year);

    if(year%400==0)
    {
        printf("%d is a Leap Year\n",year);
    }
    else if(year%100==0)
    {
        printf("%d is not a Leap Year\n",year);
    }
    else if(year%4==0)
    {
        printf("%d is a Leap Year\n",year);
    }
    else
    {
        printf("%d is not a Leap Year",year);
    }
    return 0;
}
