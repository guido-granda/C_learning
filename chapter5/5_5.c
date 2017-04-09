#include<stdio.h>

int main(void)
{
   long a,b,c;
   double d,e,f;
   a=1L;
   b=2L;
   c=3L;
   d=4.0;
   e=5.0;
   f=6.0;
   printf("A variable of type long accupies %d bytes.", sizeof(long));
   printf("\nHere are the addresses of some variables of type long:");
   printf("\nThe address of a is: %p . The address of b is: %p ",&a,&b);
   printf("\nThe address of c is: %p",&c);
   printf("\n\nA varible of type double occupies %d bytes.",sizeof(double));
   printf("\nHere are the adresses of some varibles of type double:");
   printf("\nThe address of d is: %p. The address of e is: %p. The adress of f is: %p",&d,&e,&f);
   return 0;

}
