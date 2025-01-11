/**
 * The above C program calculates the average of three input numbers.
 * 
 * @param num1 a
 * @param num2 The `num2` parameter in the `average` function refers to the second number input by the
 * user when the program prompts for three numbers. In the `main` function, `num2` corresponds to the
 * variable `b`, which is the second number entered by the user.
 * @param num3 The parameter `num3` in the `average` function is the third number that is passed to the
 * function to calculate the average. In the `main` function, `num3` corresponds to the variable `c`,
 * which is the third number entered by the user.
 * 
 * @return The function `average` is returning the average of three numbers (num1, num2, num3) passed
 * to it as arguments.
 */
#include<stdio.h>
float average(float num1, float num2, float num3){
    return (num1+num2+num3)/3 ;
}
int main(int argc, char const *argv[])
{
    float a,b,c,result;
    printf("Enter the numbers\n");
    scanf("%f %f %f",&a,&b,&c);
    result=average(a,b,c);
    printf(" Average result of %.1f %.1f %.1f is\n%.2f",a,b,c,result);
    return 0;
}
