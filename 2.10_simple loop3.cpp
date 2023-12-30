#include<stdio.h>
int main()
{
    int i,a;
    for(i=1;i<=10;i++)
    {
        if(i%2==0)
            continue;
            printf("%d\n",i);
    }
    for(i=1;i<=10;i++)
    {
        if(i>3)
            break;
        printf("%d\n",i);
    }
    printf("\n Take input until the input is 0 and while it is not end of file:\n");
    while(scanf("%d",&a)!=EOF)
    {
        if(a==0)
            break;
        printf("%d\n",a);
    }
    printf("\nAlt:\n");
    while(scanf("%d",&a)!=EOF && a)
    {
        printf("%d\n",a);
    }
    return 0;

}
