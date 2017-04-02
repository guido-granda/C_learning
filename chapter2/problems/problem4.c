#include<stdio.h>

int main(void)
{
 float pay,pay_per_hour;
 int hours;
 printf("Enter your weekly pay: ");
 scanf("%f",&pay);
 printf("\nenter the number of hours you work per week:");
 scanf("%d",&hours);
 pay_per_hour=pay/hours;
 printf("you earn %f per hour",pay_per_hour);
 return 0;

}
