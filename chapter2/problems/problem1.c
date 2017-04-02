#include<stdio.h>
#include<math.h>

int main(void)
{
 double distance,distance_f,rest_meters,rest_centimeters,centimeters,meters;
 float meters_int;
 printf("Enter a distance in km ");
 scanf("%lf",&distance);
 meters=distance*1000.0;
 meters_int= floor(meters);
 rest_meters=meters-meters_int;

 centimeters=meters_int*100;
 rest_centimeters=rest_meters*100.0;
 distance_f=centimeters;
 printf("The equivalent distance in centimeters is: %0.2lf",centimeters);
 printf("The rest of centimeters is: %0.2lf",rest_centimeters);
 return 0;
}
