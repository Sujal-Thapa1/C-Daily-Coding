/**
 * This C program checks if a given number is even or not.
 * 
 * @return The `main` function is returning an integer value of 0.
 */
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d", &num);
    if(num%2==0){
        printf("%d is an even number",num);
    }else{
        printf("%d is not an even number",num);
        }
    return 0;
}
