#include<stdio.h>
int main()
{
    int i=2,n=15000,j,flag=0,k,l;
    int counting=0,target;
    scanf("%d",&k);
    for(l=1;l<=k;l++)
    {
   // printf("Enter Target: ");
    scanf("%d",&target);
    while(i<=n){
            flag=0;
        for(j=2;j<=i-1;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            counting++;
        }
        if(counting==target)
        {
            printf("%d\n",i);
            break;
        }
     i++;
    }
    }
    return 0;
}



