//Program to calculate the volumn of a cylinder 

#include<stdio.h>
int main(int argc, char const *argv[])
{
    float radius,ht,volumn;
    const float pi=3.14;
    printf("Enter the value of radius");
    scanf("%f",&radius);
    printf("Enter the value of height");
    scanf("%f",&ht);
    volumn=pi*radius*radius*ht;
    printf("The volumn of a cylinder having height= %f and radius= %f is %f",ht,radius,volumn);
    return 0;
}
