#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<11;i++)
        printf("%d ",i);
printf("\n");
    for(i=10;i>0;i--)
        printf("%d ",i);
printf("\n");
    for(i=1;i<11;i+=2)
        printf("%d ",i);
printf("\n");
        i=5;
        while(i<=7)
        {
            printf("%d ",i*2);
            i++;
        }
    return 0;
}
