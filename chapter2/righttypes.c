/*Program 2.13 Choosing the correct type jor the job */

#include<stdio.h>

int main(void)
{
 const float Revenue_Per_150=4.5f;
 short JanSold = 23500;
 short FebSold = 19300;
 short MarSold = 21600;
 float RevQuarter = 0.0f;

 int QuarterSold = JanSold+FebSold+MarSold;
 
 printf("\nStock sold in\n January: %d\n Feb: %d\n Mar: %d\n ", JanSold, FebSold,MarSold);
 
 printf("\nTotal stock sold in first quarter: %d",QuarterSold);
 RevQuarter=(float)QuarterSold/150.0f*Revenue_Per_150;
 printf("\nSales revenue this quarter is: $%.2f\n",RevQuarter);
 return 0;

}
