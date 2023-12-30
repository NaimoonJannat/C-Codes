#include<stdio.h>
int main()
{
    int a;
    int op;
    int b;
    scanf("%d",&a);
    scanf("%c",&op);
    scanf("%d",&b);
    switch(op)
    {
    case '+':
        printf("Sum:%d",(a+b));
        break;
    case '-':
        printf("Sub:%d",(a-b));
        break;
    case '*':
        printf("Multi:%d",(a*b));
        break;
    case '/':
        printf("Div:%d",(a/b));
        break;
    default:
        printf("Not valid");
        break;
        }
        return 0;
}
