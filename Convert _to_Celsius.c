/*
Name:Faith Mutheu
Reg no:CT101/G/26461/25
Description:Convert to celsius
*/
#include<stdio.h>
float convertToCelsius(float fahrenheit)
{   return(fahrenheit-32)*5.0/9.0;
}
int main () {
    float f;
    printf("Enter temperature in fahrenheit:");
    scanf("%f",&f);
    printf("Temperature in Celsius=%.2f°C\n,convertToCelsius(f)");
    return 0;
}