#include<stdio.h>
int main(){
    float cel,fern;
    printf("Enter temperature in Celsius: ");
    scanf("%f",&cel);
    fern=(cel*9/5)+32;
    printf("Temperature in Fahrenheit: %.2f\n",fern);
    return 0;
}