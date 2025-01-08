//Program to Convert Celsius to Farenheit

#include<stdio.h>
int main(int argc, char const *argv[])
{
    float celcius,fahrenheit;
    printf("Enter the value of celcius");
    scanf("%f",&celcius);
    fahrenheit=(celcius*9/5)+32;
    printf("%fdegree Celcius is %fdegree Farenheit",celcius,fahrenheit);
    return 0;
}
