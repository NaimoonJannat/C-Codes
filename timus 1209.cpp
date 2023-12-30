#include <stdio.h>

int main() {
    int test;
    int k,i,j,sum=1;
    //scanf("%d\n",&test);
    //while(j<=test)
   scanf("%d",&k);
   for(i=1;i<k;i++)
   {
       sum=sum+i;
   }
   if(sum==k)
   printf("1\n");
   else
   printf("0\n");

    return 0;
}
