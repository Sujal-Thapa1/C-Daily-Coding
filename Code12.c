// Program to calculate the area of circle 


#include<stdio.h>
int main(int argc, char const *argv[])
{
    float radius,area;
    const float pi=3.14;
    printf("Enter the value of radius");
    scanf("%f",&radius);
    area=pi*radius*radius;
    printf("The area of a circle having radius= %f is %f",radius,area);
    return 0;
}


