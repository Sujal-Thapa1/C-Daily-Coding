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
