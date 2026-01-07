#include<stdio.h>
#define PI 3.14

int main(){
    float area,c,r;
    printf("Enter radius of the circle: ");
    scanf("%f",&r);
    c=2*PI*r;//circumference formula
    printf("Circumference of the circle: %.2f\n",c);
    
    area=PI*r*r;//area formula
    printf("Area of the circle: %.2f\n",area);
    return 0;
}