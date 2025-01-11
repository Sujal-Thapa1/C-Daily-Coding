#include<stdio.h>
float area_RightAngleTriangle(float base, float height){
    float area= (1*base*height)/2;
    return (area);
}
int main(int argc, char){
    float b,ht,result;
    printf("Enter the value of base");
    scanf("%f",&b);
    printf("Enter the value of height");
    scanf("%f",&ht);
    result=area_RightAngleTriangle(b,ht);
    printf("The area of the triangle having base %.1f and height %.1f is %.1f",b,ht,result);
    return 0;
}