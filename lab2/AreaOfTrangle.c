#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    printf("Enter the sides of Trangle");
    printf("\na:");
    scanf("%f",&a);
    
    printf("b:");
    scanf("%f",&b); 

    printf("c:");
    scanf("%f",&c);
    float s=(a+b+c)/2;
    printf("Semi Perimeter is: %.2f",s);
    float inside;
    inside=s*(s-a)*(s-b)*(s-c);
    float area=pow(inside,0.5);
    printf("\nArea of Trangle is: %.2f",area);

    return 0;



}