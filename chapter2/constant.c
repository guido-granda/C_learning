/*Program 2.8 calculations on a table */
#include<stdio.h>
#define pi 3.14159f
int main(void)
{
 float radius=0.0f;
 float diameter=0.0f;
 float circunference=0.0f;
 float area=0.0f;
 
 printf("Input the diameter of a table:");
 scanf("%f",&diameter);
 radius= diameter/2.0f;
 circunference= 2.0f*pi*radius;
 area=pi*radius*radius;
 printf("\n The circunference is %.2f",circunference);
 printf("\n The area id %.2f\n",area);
 return 0;
 
}
