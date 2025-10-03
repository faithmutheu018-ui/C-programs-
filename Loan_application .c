/*
Name Faith Mutheu 
Reg no 26461
Description Program for loan application 
*/
#include<stdio.h>
int main(){
//variable declaration 
float age,income;
//prompt user to enter age
printf("\n enter age");
scanf("%f",&age);
//prompt user to enter income
printf("\n enter income");
scanf("%f",&income);
if(age>=21 &age>=21000)
//Display loan application results 
{printf("Congratulations,you qualify for a loan.\n");} else

{printf("unfortunately,we are unable to offer a loan at this time.\n");}
return 0;
}
