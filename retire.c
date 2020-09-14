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
  
  months=years*12
  
    if(0>=rateReturn && rateReturn>=1){
   printf("Error.");
  }
  if(0>=rateInflation && rateInflation>=1){
   printf("Error.");
  }
for(int i=1; i<=months; i++){
 
}
  printf("\nYear    Interest    Balance");
    printf("\n----  --------    -------");
    printf("\n%d    %.2lf    %.2lf", months, interest, Nest egg);











    return 0; 
 }
