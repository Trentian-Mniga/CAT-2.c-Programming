#include<stdio.h>

int main () {

   float hours Worked,hourly Wage,gross Pay,taxes,netPay;

   printf("Enter hours Worked in a week:");

   scanf("%f",& hourly Worked);

   printf("Enter hourly wage:");

   scanf("%f",& hourly wage);

//calculate gross pay while considering overtime

if (hours Worked > 40){

   gross Pay= (40 * hourly wage) + (hours worked-40) * hourly wage * 1.5;

} else {

    gross Pay= hours worked * hourly wage;

}

// calculate taxes

if (gross Pay <= 600){

   taxes = gross Pay * 0.15;

} else {

  taxes= 600 * 0.15 + (gross Pay-600)* 0.20;

}
// calculate net pay

   net Pay = gross Pay - taxes;

   printf("In gross Pay: %.2f\n",taxes);

   printf("Taxes:%.2f\n",taxes);

   printf("Net Pay:%.2f\n",net Pay);

   return 0;

}