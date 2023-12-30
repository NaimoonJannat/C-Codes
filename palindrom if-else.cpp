#include<stdio.h>
int main()
{
    int n;
    printf("Enter a positive integer less than 100:");
    scanf("%d",&n);
    if(n>0)
        {
        if(n<=9)
            printf("%d\n",n);

        else if(n<=18)
            printf("%d\n",((n-9)*10)+(n-9));
        else if(n<100)
            printf("%d\n",100+((n-19)*10)+1);
        else
        printf("Invalid");
        }
    else
        printf("Invalid. Try again!");
    return 0;
}
