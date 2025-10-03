/*
Name:Faith Mutheu 
Reg no.26461
Description:Displaying data bundles 
*/
#include<stdio.h>//scanf(),printf();
int main(){

//Display the menu

printf("1.100MB @ 50KES\n");
printf("2.500MB @ 200KES\n");
printf("3.1GB @ 350KES\n");
printf("4.2GB @ 600KES\n");

//input the choice 
int choice; 
printf("Enter your choice (1-4):");
scanf("%d",&choice);

//Display the bundles using switch 
switch(choice){
case 1:
        printf("You selected 100MB @ 50KES\n");break;
case 2:
        printf("You selected 500MB @ 200KES\n");break;
case 3:
       printf("You selected 1GB @ 350KES\n");break;
case 4:
     printf("You selected 2GB @ 600KES\n");break;
     default:printf("invalid choice\n");}
     return 0 ;}