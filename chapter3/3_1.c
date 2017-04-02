/* Program 3.1 */

#include<stdio.h>

int main(void)
{
 int number= 0;
 printf("\nEnter an integer between 1 and 10: ");
 scanf("%d",&number);
 if(number >5 )
  printf("\nYou entered %d which is greater than 5\n ",number);
 if(number<6)
  printf("\nYou entered %d which is less than 6\n",number);
 return 0;   
}
