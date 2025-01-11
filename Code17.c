/**
 * The above code defines a function to calculate the area of a right-angled triangle and includes a
 * main function to take user input for base and height to calculate and display the area.
 * 
 * @param base The base of a right-angled triangle is one of the sides that form the right angle. It is
 * the horizontal side of the triangle.
 * @param height The height of the right-angled triangle.
 * 
 * @return The function `area_RightAngleTriangle` returns the calculated area of a right-angled
 * triangle based on the provided base and height values.
 */
#include<stdio.h>
float area_RightAngleTriangle(float base, float height){
    float area= (1*base*height)/2;
    return (area);
}
int main(int argc, char){
    float b,ht,result;
    printf("Enter the value of base\n");
    scanf("%f",&b);
    printf("Enter the value of height\n");
    scanf("%f",&ht);
    result=area_RightAngleTriangle(b,ht);
    printf("The area of the triangle having base %.1f and height %.1f is %.1f",b,ht,result);
    return 0;
}