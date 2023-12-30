#include<stdio.h>
int main()
{
    int i=2,n,j,flag=0;
    printf("Enter N: ");
    scanf("%d",&n);
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
            printf("%d ",i);
        }

     i++;
    }
    return 0;
}
