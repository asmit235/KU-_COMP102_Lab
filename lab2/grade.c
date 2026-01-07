#include<stdio.h>
int main(){
    int mark;
    
    printf("Enter obtained mark: ");
    scanf("%d",&mark);

    if (mark>=90){
        printf("Obtained Grade: A\n");
    }
    else if (mark>=80){
        printf("Obtained Grade: B\n");
    }
    else if (mark>=70){
        printf("Obtained Grade: C\n");

    }
    else if (mark>=60){
        printf("Obtained Grade: D\n");
    }
    else{
        printf("Obtained Grade: F\n");
    }
    return 0;
}