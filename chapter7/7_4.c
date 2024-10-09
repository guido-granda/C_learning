#include<stdio.h>

int main(void)
{
   char multiple[] = "My string";

   char *p=&multiple[0];

   printf("\nThe address of the first array element : %p",p);
   p=multiple; /* note we dont have to use &multiple because multiple is an array */
   printf("\nThe address obtained from the array name: %p\n",p);
   return 0;
   /* The adress of multiple[0] is the same adress of multiple*/ 
}
