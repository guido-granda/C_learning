#include<stdio.h>

int main(void)
{
   int count=0;
   long sum=0L;
   printf("\nEnter the number of integers you want to sum: ");
   scanf("%d",&count);
   for(int i=1;i<=count; sum += i++);
   printf("\nTotal of the first %d numbers is %ld\n",count,sum);
   return 0;

}
