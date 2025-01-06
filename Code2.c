// Simple calculator using switch case statement
#include<stdio.h>
/**
 * The above C program takes two numbers as input and performs addition, subtraction, multiplication,
 * or division based on the user's choice.
 * 
 * @return The main function is returning an integer value of 0.
 */
int main()
{
    float num1,num2;
    float sum,sub,mul,div;
    int opt;
    printf("Enter the two numbers\n");
    scanf("%f %f",&num1,&num2);
    printf("Choose an operator\n1) Addition\n2) Subtraction\n3) Multiplication\n4) Division\n");
    scanf("%d",&opt);
    switch(opt){
        case 1:
            sum=num1+num2;
            printf("The sum of %.0f and %.0f is %.0f",num1,num2,sum);
            break;
        case 2:
            sub=num1-num2;
            printf("The subtraction of %.0f and %.0f is %.0f",num1,num2,sub);
            break;
        case 3:
            mul=num1*num2;
            printf("The multiplication of %.0f and %.0f is %.0f",num1,num2,mul);
            break;
        case 4:
            if(opt!=0){
                div=num1/num2;
                printf("The division of %.0f and %.0f is %.0f",num1,num2,div);
            }else{
                printf("Division by 0 is not possible");
            }
            break;
            default:
            printf("Invalid Operation");
            break;
    }
    return 0;
}
