//Program to Convert Celcius to Farenheit

#include<stdio.h>
int main(int argc, char const *argv[])
{
    float celcius,fahrenheit;
    printf("Enter the value of celcius");
    scanf("%f",&celcius);
    fahrenheit=(celcius*9/5)+32;
    printf("%.2f degree Celcius is %.2f degree Farenheit",celcius,fahrenheit);
    return 0;
}
