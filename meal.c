#include<stdio.h>
int main()
{
    double meal,cost;
    int tip,tax;
  scanf("%lf%d%d",&meal,&tip,&tax);
  cost=meal+(meal*tip/100)+(meal*tax/100);
  printf("%.0lf",round(cost));
  return 0;



}
