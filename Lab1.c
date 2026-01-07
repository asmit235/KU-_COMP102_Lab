
#include<stdio.h>
int main(){
    //1.Arithmetic Operator Program
    // Declare two integer variables
    int a=30;// first Number
    int b=5;// second Number

    //Addition(+)
    printf("Addition:%d+%d=%d\n",a,b,a+b); // adds two number a and b
    //result: 30+5=35

    //Subtraction(-)
    printf("Subtraction:%d-%d=%d\n",a,b,a-b); // subtracts b from a
    //result: 30-5=25

    //Multiplication(*)
    printf("Multiplication:%d*%d=%d\n",a,b,a*b);// multiplies a and b
    //result: 30*5=150

    //Division(/)
    printf("Division:%d/%d=%d\n",a,b,a/b);// divides a by b
    //result: 30/5=6

    //Modulus(%)
    printf("Modulus:%d\n",a % b);// gives remainder when a is divided by b
    //result: 30%5=0 (because 30 is divisible by 5)
    


    //2. Comparison Operator Program
    // Declare two integer variables
    int x=9;// first Number
    int y=5;// second Number
    
    //Note: 1=True and 0=False in C programming
    //Equal to(==)
    printf("x==y: %d\n",x==y);// it checks if x is equal to y
    //result: x==y: 0 (False because 9 is not equal to 5)

    //Not Equal to(!=)
    printf("x!=y: %d\n",x!=y);// it checks if x is not equal to y
    //result: x!=y: 1(True because 9 is not equal to 5)

    //Greater than(>)
    printf("x>y: %d\n",x>y);// it checks if x is greater tahn y
    //result: x>y: 1(True because 9 is greater than 5)

    //Less than(<)
    printf("x<y: %d\n",x<y);// it checks if x is less than y
    //result: x<y: 0(False because 9 is not less than 5)

    //Greater than or Equal to(>=)
    printf("x>=y: %d\n",x>=y);// it checks if x is greater than or equal to y
    //result: x>=y: 1 (True because 9 is greater than 5)

    //Less than or Equal to(<=)
    printf("x<=y: %d\n",x<=y);// it checks if x is less than or equal to y
    //result: x<=y: 0 ( False because 9 is not less than or equal to 5)



    //3. Assignment Operator Program
    //Declear a number variable
    int num=10;// initial value

    //+= operator
    printf("num+=5: %d\n",num+=5);// it adds 5 to its initial value like num=num+5
    //result: num+=5: 15 
    
    //-= operator
    printf("num-=3: %d\n",num-=3);// it subtracts 3 from its current value(15) like num=num-3
    //result: num-=3: 12

    //*= operator
    printf("num*=2: %d\n",num*=2);// it multiplies its current value(12) by 2 like num=num*2
    //result: num*=2: 24

    // /= operator
    printf("num/=4: %d\n",num/=4);// it divides its current value(24) by 4 like num=num/4
    //result: num/=4: 6

    // %= operator
    printf("num%%=4: %d\n",num%=4);// it gives remainder when its current value(6) is divided by 4 like num=num%4
    //result: num%=4: 2


    //4. Logical Operator Program
    // Declare two integer variables
    int m=4;// first Number
    int n=8;// second Number

    //Logical AND(&&)
    printf("(m>2 && n>5): %d\n",(m>2 && n>5));// it checks if both conditions are true                                                                    
    //result: (m>2)&&(n>5): 1 (True because 4>2 and 8>5
    //it results true only if both conditions are true else results false

    //Logical OR(||)
    printf("(m>6 || n>5): %d\n",(m>6 || n>5));// it checks if at least one condition is true
    //result: (m>6)||(n>5): 1 (True because 8>5
    //it results true if at least one condition is true else results false if both conditios are fasle 

    //Logical NOT(!)
    printf("!(m==n): %d\n",!(m==n));// it reverses the result like if the condition is true it results false and if the condition is false it results true
    //result: !(m==n): 1 (True because m is not equal to n
    //if the condition is true it results false and if the condition is false it results true

    
    
    //5. Unary Operator Program
    //lets declare few variables
    int p=1;//first Number
    int q=1;//second Number
    int r=1;//third Number
    int s=1;//fourth Number
    
    //Increasement Operator(++)
    printf("Pre-Incrementing p=%d\n",++p);// it increases the value of p before using it
    //result: Pre-Incrementing p=2
    printf("Post-Incrementing q=%d\n",q++);// it increases the value of q after using it
    //result: Post-Incrementing q=1

    //Decreasement Operator(--)
    printf("Pre-Decrementing r=%d\n",--r);// it decreases the value of r before using it
    //result: Pre-Decrementing r=0      
    printf("Post-Decrementing s=%d\n",s--);// it decreases the value of s after using it
    //result: Post-Decrementing s=1 
   
    return 0;
}


