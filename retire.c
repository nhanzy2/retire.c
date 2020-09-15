/**
 * Author: Nathan Hanzy
 * Date: 2020/09/04
 *
 * A program to calculate 401k plan
 */
 #include<stdlib.h>
 #include<stdio.h>

 int main (int argc, char **argv) {
  double startBal, contributAmount, rateReturn, rateInflation, interest, balance;
  int years;
  int months;

   startBal=atof(argv[1]);
   contributAmount=atof(argv[2]);
   rateReturn=atof(argv[3]);
   rateInflation=atof(argv[4]);
   years=atoi(argv[5]);
  
   interest=(startBal * (((1 + rateReturn)/(1 + rateInflation))-1))/12;
   balance= startBal + contributAmount + interest;
   months= years*12;
  
  printf("\nMonth    Interest    Balance\n");
  
  if(18500>=startBal){
   printf("Error.");
  }

  if(0>=rateReturn || rateReturn>=1){
   printf("Error.");
  }
  if(0>=rateInflation || rateInflation>=1){
   printf("Error.");
  }
  double monthlyIncrease;
for(int month=1; month<=months; month++){
 printf("$%d        $%.2lf         $%.2lf\n ", month, interest, balance);
 monthlyIncrease= interest * (((1 + rateReturn)/(1 + rateInflation))-1);
 interest= interest + monthlyIncrease;
 balance=balance + interest+ contributAmount;
}



   return 0;
 }









    return 0; 
 }
