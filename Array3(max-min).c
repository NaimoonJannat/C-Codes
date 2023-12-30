#include<stdio.h>
int main()
{
    int max,i,n,min;
    printf("How many:");
    scanf("%d",&n);
    printf("\nEnter %d numbers:",n);
    int num[n];
     for(i=0;i<n;i++)
        scanf("%d",&num[i]);
     max=num[0];
     for(i=1;i<n;i++)
     {
         if(max<num[i])
         max=num[i];
     }
    printf("\nMa+ximum number is: %d",max);
     min=num[0];
     for(i=1;i<n;i++)
     {
         if(min>num[i])
         min=num[i];
     }
    printf("\nMinimum number is: %d",min);

    getch();
    return 0;
}
