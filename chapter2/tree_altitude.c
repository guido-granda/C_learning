/* Last problem of chapter 2: Tree altitude*/

#include<stdio.h>

int main(void)
{
 double dist1,dist2,height1,height2,height3;
 printf("Enter lofty height in meters:");
 scanf("%lf",&height2);
 
 printf("Enter shorty  height in meters:");
 scanf("%lf",&height1);

 printf("Enter lofty  distance in meters:");
 scanf("%lf",&dist1);

 printf("Enter shorty  distance in meters:");
 scanf("%lf",&dist2);

 height3=height1+(dist1+dist2)*(height2-height1)/dist1;
 printf("The height of the tree is: %lf",height3);
 return 0;
}
