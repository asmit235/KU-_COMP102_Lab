#include<stdio.h>
int main(){

    int num;
    printf("Enter a Num: ");
    scanf("%d",&num);

    if (num%2==0){
        printf("%d is Even\n",num);
    }
    else{
        printf("%d is Odd\n",num);
    }

}