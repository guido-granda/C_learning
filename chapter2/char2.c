/* Program 2.16 Using char type */
#include <stdio.h>

int main(void)
{
 char first='A';
 char second= 'B';
 char last = 'Z';
 char number = 40;

 char ex1= first+2;
 char ex2 = second-1;
 char ex3 = last +2;
 
 printf("Character values  %-5c%-5c%-5c", ex1,ex2,ex3);
 printf("\nNumericla values %-5d%-5d%-5d", ex1,ex2,ex3);
 printf("\nThe number %d is the code for the character %c\n", number, number);
 return 0;

}
