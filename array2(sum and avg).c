//Write a program which takes input from user in an array and gives the summation and avg
#include<stdio.h>
#include<stdlib.h>
int main()
{   system("color 5F");
    int n;
    printf("Enter the number: ");
        scanf("%d",&n);
    printf("Enter %d numbers: ",n);
    int x[n],i,sum=0;
    for(i=0;i<n;i++)
        scanf("%d",&x[i]);
    printf("\nThe numbers you have entered :");
     for(i=0;i<n;i++)
        printf("%d ",x[i]);
    printf("\nSum: ");
      for(i=0;i<n;i++)
      {
          sum=sum+x[i];
      }
    printf("%d",sum);
    printf("\nAvg: %.1lf",(double)sum/n);


   return 0;

}
