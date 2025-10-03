/*
Name:Faith Mutheu 
Reg_no:26461
Description:Water bill consumption 
*/
#include<stdio.h>//scanf(),printf();
int main(){
int units;
float bills;
printf("Enter water_units consumed:");
scanf("%d",&units);
//calculating water bills
if(units<=30) {bills =units * 20;}else
if(units>=31 && units<=60){bills =units * 25;}else
if(units>60){bills =units * 30;}
//Display total bills
printf("total water bills:%.2fKES\n",bills);
return 0;
}
