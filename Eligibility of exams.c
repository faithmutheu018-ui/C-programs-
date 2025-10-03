/*
Name:Faith Mutheu
Reg no:CT101/G/26461/25
Date:3/10/2025
Description:Program to check eligibility of a exams
*/
#include<stdio.h>
int main(){
float attendance;
float average_marks;
// input the  attendance & average_marks
printf("Enter the attendance:");
scanf("%f", &attendance);

printf("Enter the average_marks:");
scanf("%f",&average_marks);
//analysing marks eligibility 
if(attendance>=75 &&average_marks>=40)
   {printf("You are eligible for final exam.\n");} else
   {printf("You are not eligible for final exam.\n");}
return 0;
}