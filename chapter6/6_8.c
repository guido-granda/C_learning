#include<stdio.h>
#include<ctype.h>

int main(void)
{
   char buffer[80];
   int i=0;
   int num_letters=0;
   int num_digits =0;
   
   printf("\nEnter an interesting string of less than 80 characters:\n");
   gets(buffer);
   
   while(buffer[i] !=0)
   {
      if(isalpha(buffer[i]))
         num_letters++;
      if(isdigit(buffer[i]))
         num_digits++;
      i++;
   }
   printf("\nThe number of letters is: %d, the number of digits is : %d",num_letters,num_digits);
   return 0;

}
