#include<stdio.h>

int main(void)
{
  const double unit_price=3.5;
  int quantity =0;
  printf("Enter the number that you wnat to buy: ");
  scanf("%d",&quantity);

  if(quantity>10)
    printf("The price for %d is $%.2f\n",quantity,unit_price*quantity*0.95);
  else
    printf("The price for %d is $%.2f\n", quantity,quantity*unit_price);
  return 0;
}

