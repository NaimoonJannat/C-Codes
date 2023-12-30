#include<stdio.h>
int substraction(int m, int n);

int main()
{
    int x=9, y=5, z=0;
    z=substraction(x,y);
    printf("%d",z);
    getch();
    return 0;
}

int substraction(int m, int n)
{
    int sub=0;
    sub=m-n;
    return sub;
}
