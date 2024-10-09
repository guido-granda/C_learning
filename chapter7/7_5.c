/* This program demostrates the effect of adding an integer value to a pointer */
#include<stdio.h>

int main(void)
{
   char multiple[] = "a string"; /* array */
   char *p= multiple;  /*pointer to the array */

   for(int i=0;i<strlen(multiple); i++)
      printf("\nmultiple[%d] = %c *(p+%d) = %c &multiple[%d] = %p  p+%d = %p",i,multiple[i],i,*(p+i),i,&multiple[i],i,p+i);

   return 0;

}
