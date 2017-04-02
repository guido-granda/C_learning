#include<stdio.h>

int main(void)
{
 float length, width,area;

 printf("Enter the length: \n");
 scanf("%f", &length);
 printf("Enter the width: \n");
 scanf("%f", &width);
 area=length*width;
 printf("The area of the room is: %.2f", area);

 return 0;
}
