#include<stdio.h>

int main(void)
{
   long num1=0L;
   long num2=0L;
   long *pnum=NULL;

   pnum=&num1; /*Pointing to the address of num1*/
   *pnum=2; /*set num1 to 2 */
   ++num2; /* increment num2 */
   num2 += *pnum; /*incrment num2 by num1*/

   pnum= &num2;
   ++*pnum;
   printf("\nnum1 = %ld, num2= %ld, *pnum= %ld, *pnum +num2 = %ld\n",num1,num2,*pnum,*pnum+num2);
   return 0;
   
}
