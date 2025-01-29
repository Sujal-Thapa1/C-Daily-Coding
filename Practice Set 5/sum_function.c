/**
 * The program calculates the sum of numbers from 1 to a given range entered by the user.
 * 
 * @param n The program you provided calculates the sum of the first N natural numbers using the
 * formula `n*(n+1)/2`. The user is prompted to enter a value for N, and the program then calculates
 * and prints the sum of the numbers from 1 to N.
 */
#include<stdio.h>
float Sum_of_N_No(float n){
    float value;
    value=n*(n+1)/2;
    printf("%.2f",value);
}
int main()
{
    float n;
    printf("Enter the range of number\n");
    scanf("%f", &n);
    Sum_of_N_No(n);
    return 0;
}
