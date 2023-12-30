#include<stdio.h>
int main()
{
    int marks[5],i;
    printf("Enter the Marks here: \n");
    for(i=0;i<=4;i++)
        scanf("%d",&marks[i]);
        printf("The marks are: \n");
            for(i=0;i<=4;i++)
                printf("%d\n",marks[i]);

    return 0;
}
