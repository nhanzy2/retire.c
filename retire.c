/**
 * Author: Nathan Hanzy
 * Date: 2020/09/04
 * 
 * A program to calculate 401k
 */
 #include<stdlib.h>
 #include<stdio.h>
 
 int main (int argc, char **argv) {
 int double startbBal,contributAmount, rateReturn, rateInflation;
 int years, months;
  
  printf("initial starting balance:");
  scanf("%lf", &startBal);
 
  printf("monthly contribution amoount:");
  scanf("%lf", &contributAmount);
 
  printf("anual rate of return:");
  scanf("%lf", &rateReturn);
 
  printf("anual rate rate of inflation:");
  scanf("%lf", &rateInflation);
 
  printf("years until retirement:");
  scanf("%d", &years);
  
  months= years*12;
  
  printf("\nMonth    Interest    Balance\n");

  if(0>=rateReturn && rateReturn>=1){
   printf("Error.");
  }
  if(0>=rateInflation && rateInflation>=1){
   printf("Error.");
  }
for(int month=1; month<=months; month++){
 interest=(startBal * (((1 + rateReturn)/(1 + rateInflation))-1))/12;
 balance= startBal + contributAmount + interest;
 printf("%d   %.2lf  %.2lf    \n ", months, interest, balance);
}
 











    return 0; 
 }
