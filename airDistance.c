/**
 * Author: Nathan Hanzy
 * Date: 2020/08/27
 *
 * A program to calculate distance between two points
 * when given 2 different longitudes and latitudes
 */
 #include <stdlib.h>
 #include <stdio.h>
 #include <math.h>

 int main (int argc, char **argv) {

 double Dist;
 double Lat1;
 double Lat2;
 double Lon1;
 double Lon2;
 

 printf("Enter Lat1:");
 scanf("%lf", &Lat1);

 printf("Enter Lon1:");
 scanf("%lf" , &Lon1);

 printf("Enter Lat2:");
 scanf("%lf", &Lat2);

 printf("Enter Lon2:");
 scanf("%lf", &Lon2);

Lat1 = Lat1 /(180 / M_PI);
Lat2 = Lat2 / (180 / M_PI);
Lon1 = Lon1 / (180 / M_PI);
Lon2 = Lon2 / (180 /M_PI);


Dist = 6372 * (acos ( sin( Lat1 ) )* (sin (Lat2)) + (cos( Lat1 )) * (cos( Lat1)) * (Lon2 - Lon1));

printf("%lf Dist" ,Dist);

return 0;
 }