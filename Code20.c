/**
 * The function calculates and prints the sum of the first n natural numbers.
 * 
 * @param n The parameter `n` in the `SumOfnNaturalNum` function represents the range of natural
 * numbers for which you want to calculate the sum. In the `main` function, this value is taken as
 * input from the user and passed to the `SumOfnNaturalNum` function to calculate
 * 
 * @return The `SumOfnNaturalNum` function is returning 0.
 */
#include<stdio.h>
float SumOfnNaturalNum(float n){
    float sum;
    sum=(n*n+n)/2;
    printf("%.2f",sum);
    return 0;
}
int main()
{
    float num;
    printf("Enter the range of numbers");
    scanf("%f",&num);
    SumOfnNaturalNum(num);
    return 0;
}
