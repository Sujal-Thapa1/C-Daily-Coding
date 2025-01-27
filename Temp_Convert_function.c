#include<stdio.h>
float Temp_Convert(float celcius){
    float F;
    F=(celcius*9/5)+32;
    printf("The value of %.2f Celcius in Fahrenheit is %.2f", celcius, F);
}
int main(){
    float c;
    printf("Enter the valus of Celcius Temperature\n");
    scanf("%f",&c);
    Temp_Convert(c);
}