#include<stdio.h>
#include<math.h>
int main(){
    float math,comp,eng;
    printf("Enter marks obtained in given subjects:\n");
    printf("Mathematics: ");   
    scanf("%f",&math);
    printf("Computer Science: ");
    scanf("%f",&comp);
    printf("English: ");
    scanf("%f",&eng);
    float perc;
    perc=(math+comp+eng)/3;
    printf("Percentage obtained: %.2f%%\n",perc);
    return 0;
}