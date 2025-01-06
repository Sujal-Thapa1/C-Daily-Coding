// Simple calculator using if else statement
#include<stdio.h>
/**
 * @brief A simple calculator program that performs basic arithmetic operations.
 *
 * This function prompts the user to enter two numbers and choose an arithmetic
 * operation (addition, subtraction, multiplication, or division). It then
 * performs the selected operation and displays the result.
 * **/
int main()
{
    float num1,num2;
    float  opt,sum,sub,div,mul;
    printf("Enter two numbers\n");
    scanf("%f %f",&num1,&num2);
    printf("Choose an operator\n1) Addition\n2) Subtraction\n3) Multiplication\n4) Division\n");
    scanf("%f",&opt);
    if(opt==1){
        sum=num1+num2;
        printf("The sum of %.0f and %.0f is %.0f",num1,num2,sum);
    }
    else if (opt==2){
        sub=num1-num2;
        printf("The subtraction of %.0f and %.0f is %.0f",num1,num2,sub);
    }
    else if (opt==3){
        mul=num1*num2;
        printf("The multiplication of %.0f and %.0f is %.0.f",num1,num2,mul);
    }
    else if (opt==4){
        div=num1/num2;
        printf("The division of %.0f and %.0f is %f",num1,num2,div);
    }
    else{
        printf("Invalid Operation");
    }   
    return 0;
}

