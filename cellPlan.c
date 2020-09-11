/**
 * Author: Nathan Hanzy
 * Date: 2020/08/24
 *
 * A program to help a customer interpret thier cell plan
 * and to see if their using thier data to quickly
 */
 #include <stdlib.h>
 #include <stdio.h>

 int main (int argc, char **argv) {

 int Day;
 int daysRemaining;
 int GB;
 int exGB;
 double exAvg;
 double usedGB;
 double avgGB;
 double belowGB;

 printf("Enter current day in period: ");
 scanf("%d", &Day);

 printf("Enter Number of GB in plan: ");
 scanf("%d", &GB);

 printf("Enter total amount of GB used: ");
 scanf("%lf", &usedGB);

 if(1<=Day && Day<=30){
daysRemaining= 30- Day;
avgGB = usedGB/Day;
printf("%d days used. ", Day);
printf("%d days remaining.\n", daysRemaining);
printf("average daily use: %lf GB/day\n", avgGB);
 } else if(1>=Day || Day>= 30) {
  printf("input dates between 1-30");
 }
 
 exAvg= ( avgGB - ((double) GB / 30));
 exGB= (avgGB * (daysRemaining-1));
 printf("You are exceeding your average daily use %f GB/day\n", exAvg);
 printf("Continuing this high usage, you'll exceed your plan by\n");
 printf("%d GB\n", exGB);
 
  belowGB = (((double)GB/30) - (usedGB/30));
  printf("To stay below your data plan, use no more than %lf GB/day", belowGB);
 




return 0;
}