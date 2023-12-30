#include<stdio.h>
int main()
{
char ch;
printf("Enter A character:");
scanf("%c",&ch);
if((ch>='A')&&(ch<='Z'))
printf("%c is capital letter",ch);
else if((ch>='a')&&(ch<='z'))
printf("%c is small letter",ch);
else
printf("Your Entered Character Is Not Valid.");
return 0;
}
