/*
Name:Faith Mutheu
Reg no 26461
Description:Computing volume and surfacearea
*/
#include<stdio.h>
#define PI 3.14159

int main(){
float radius,height,volume,surface_area;

//prompt user enter radius 
printf("\n enter radius:");
scanf("%f",&radius);
//prompt user to enter height 
printf("\n enter height:");
scanf("%f",&height);

//compute volume and surface_area
volume =PI*radius*radius*height ;
surface_area=2*PI*radius*radius+2*PI*radius*height;

//Display results 
printf("volume of the cylinder=%.2f\n",volume);
printf("surface_area of the cylinder=%.2f\n",surface_area);

return 0;}
    
