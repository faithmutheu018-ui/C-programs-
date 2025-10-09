/*
Name Faith Mutheu 
Reg no 26461
Description Bank transaction 
*/
#include<stdio.h>
int main(){
float balance,withdraw;
printf("Enter initial balance:");
scanf("%f",balance);

while(balance >0){
printf("Enter amount to withdraw");
scanf("%f",withdraw);
balance-= withdraw ;
if(balance>0){
printf("Remaining balance:%.2f\n",balance);
}else{printf("balance is zero or insufficient\n");}
}
printf("Transaction ended\n");
return 0 ;}
    