/**
 * The function calculates the force of attraction based on the mass input using the formula F = mg.
 * 
 * @param mass The program you provided calculates the force of attraction based on the mass entered by
 * the user. When you run the program, it will prompt the user to enter the value of mass, and then it
 * will calculate and display the force of attraction using the formula F = m * g, where m is the
 * 
 * @return The function `ForceOfAttraction` is returning the value 0.
 */
#include<stdio.h>
float ForceOfAttraction(float mass){
    const float g=9.8;
    float force = mass*g;
    printf("%.2f",force);
    return 0;
}
int main()
{
    float mass;
    printf("Enter the value of mass\n");
    scanf("%f",&mass);
    ForceOfAttraction(mass);
    return 0;
}
